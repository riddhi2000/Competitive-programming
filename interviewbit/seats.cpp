#include <bits/stdc++.h>
using namespace std;

const int m=1e7+3;

int seats(string A) {
    vector<int> pos;
    
    for(int i=0;i<A.length();i++){
        if(A[i] == 'x'){
            pos.push_back(i);
        }
    }
    int median,ans=0,i;
    int n=pos.size();
    
    median = pos[n / 2];
    int p=pos[median];
    int s=p-1,e=p+1;
    
    
    while(A[e] == 'x'){
        e++;
    }
    
    for(i=n/2-1;i>=0;i--){
        while(A[s] == 'x'){
            s--;
        }
        ans += s-pos[i];
    }
    for(i=n/2+1;i<n;i++){
        while(A[e] == 'x'){
            e++;
        }
        ans += pos[i]-e;
    }
    
    
    return ans;
    
}



int main(){

    cout << seats(".xxx") << endl;

    return 0;
}
