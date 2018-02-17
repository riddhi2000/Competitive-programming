#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define pb push_back
#define pp pop_back
#define mp make_pair
#define MOD 1e9+7



int fibsum(int A) {
    
    vector<int> v(A+1,INT_MAX);
    
    v[0]=0;
    v[1]=1;
    
    int f=1,l=1;
    
    while(l<=A){
        int t=f;
        f=l;
        l=t+l;
        
        if(l<=A)
        v[l]=1;
    }
    
    for(int i=4;i<=A;i++){
        if(v[i] == 1)
            continue;
            
        for(int j=1;j<=i/2;j++){
            if(v[j]+v[i-j] < v[i] ){
                v[i]=min(v[i],v[j]+v[i-j]);
            }
        }
    }
    
    return v[A];
    
}

int main(){
    for(int i=1;i<=50;i++)
    cout << i << " -> " <<  fibsum(i) << endl;
}