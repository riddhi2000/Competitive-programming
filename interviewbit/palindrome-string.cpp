#include <iostream>

using namespace std;

int isPalindrome(string A) {
     
    for(int i=0,j=A.size()-1;i<j;i++,j--){
        while(!( (A[i]>='a' && A[i]<='z') || (A[i]>='A' && A[i]<='Z') ))
            i++;
            
        while(!( (A[j]>='a' && A[j]<='z') || (A[j]>='A' && A[j]<='Z') ))
            j--;
        
        if(i<j && tolower(A[i]) != tolower(A[j]))
            return 0;
        
    }
    
    return 1;
}

int main(){

    cout << isPalindrome(".,") << endl;

}