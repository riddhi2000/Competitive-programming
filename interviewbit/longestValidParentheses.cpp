#include <bits/stdc++.h>
using namespace std;

int longestValidParentheses(string A) {
    int lbrace=0,rbrace=0;
    int validlength=0,currentlength=0;
    int i,j;

    for(i=0,j=0;i<A.length();i++){
        if(A[i] == '('){
            lbrace++;
        }
        else if(A[i] == ')'){
            rbrace++;
        }
        currentlength++;
        if(lbrace == rbrace && validlength<currentlength){
            validlength=currentlength;
        }
        while(rbrace > lbrace && j<=i){
            if(A[j] == '(') lbrace--;
            else rbrace--;
            currentlength--;
            j++;
        }
        if(lbrace == rbrace && validlength<currentlength){
            validlength=currentlength;
        }
    }
    
    while(j < A.length()){
        if(A[j] == '(') lbrace--;
        else rbrace--;
        currentlength--;
        j++;
        if(lbrace == rbrace && validlength<currentlength){
            validlength=currentlength;
        }
    }
    return validlength;
}

int main(){
    cout << longestValidParentheses(")))((") << endl;
    return 0;
}
