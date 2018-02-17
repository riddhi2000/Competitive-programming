#include <bits/stdc++.h>
using namespace std;

int numDecodings(string A) {
    
    if(A.length() == 0 || A[0]=='0')
        return 0;
        
    int count[A.length()+1];
    count[0]=count[1]=1;
    
    
    for(int i=2;i<=A.length();i++){
        
        count[i]=0;
        
        if(A[i-1] > '0')
            count[i]=count[i-1];
            
        
        if(A[i-2] == '1' || (A[i-2]=='2' && A[i-1]<'7') )
            count[i]+=count[i-2];

        cout << A[i-1] << " " << count[i] << endl;
            
        if(count[i] == 0)
            return 0;
            
    }
    
    return count[A.length()];
    
}

int main(int argc, char const *argv[]){
    
    cout << numDecodings("875361268549483279131") << endl;
    return 0;
}   