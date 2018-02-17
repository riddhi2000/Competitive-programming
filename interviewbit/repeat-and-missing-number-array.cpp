#include <bits/stdc++.h>

using namespace std;

vector<int> repeatedNumber(const vector<int> &A) {
    
    int n=A.size();
   
    long long int a,b,x,y;
    vector<int> ans;
    a=0;
    x=0;
    b=y=0;
    
    for(long long int i=0;i<n;i++){
       a+=((long long int)A[i]-(i+1));
      
       x+=((long long int)A[i]*(long long int)A[i])-((i+1)*(i+1));
     
    }
    
    b=x/a;
    y=(a+b)/2;
    
    ans.push_back(y);
    ans.push_back(y-a);
    
    return ans;
    
}

int main(){


    
    return 0;
}