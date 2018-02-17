#include <bits/stdc++.h>
using namespace std;


int evaluate(int x,int y,string ch){
    char c=ch[0];
    switch(c){
        case '+' : return x+y;
        case '*' : return x*y;
        case '/' : return x/y;
        case '-' : return x-y;
    }
}

bool isOp(string s){
	char c;
	if(s.length() == 1)
    	c=s[0];
    if(c=='+' || c=='-' || c=='*' || c=='/')
        return true;
    return false;
}

int evalRPN(vector<string> &A) {
   stack<int> st;
   
   for(int i=0;i<A.size();i++){
   		cout << i << endl;
       if( isOp(A[i]) ){
       		cout << "if" << endl;
           int s=st.top();
           st.pop();
           int f=st.top();
           st.pop();
           int z=evaluate(f,s,A[i]);
           st.push(z);
       }
       else{
       		cout << "else" << endl;
           st.push(stoi(A[i]));
       }
   }
   
   return st.top();
}

int main(){

	string A[]={ "-2", "-1", "2", "+", "-1", "-", "-", "2", "-2", "1", "-", "+", "-", "-2", "-2", "-", "-1", "2", "-2", "-", "-2", "-1", "+", "1", "1", "-", "-1", "+", "1", "*", "*", "2", "+", "*", "-", "-2", "1", "-2", "*", "+", "-2", "*", "1", "*", "-", "*", "*" };
	
	vector<string> v(A, A + sizeof A / sizeof A[0]);

	cout << evalRPN(v) << endl;
	return 0;
}