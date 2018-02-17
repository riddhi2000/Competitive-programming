#include <bits/stdc++.h>
using namespace std;

char arr[][10]={{'0'},{'1'},{'a','b','c'},{'d','e','f'},
			{'g','h','i'},{'j','k','l'},{'m','n','o'},
			{'p','q','r','s'},{'t','u','v'},{'w','x','y','z'}};


void letterCombinationsutil(string x,string &A,int i,vector<string> &ans) {
	if(i == A.length()){
		cout << "i: " << i << endl;
		ans.push_back(x);
		return;
	}
	else if(A[0] == '0' || A[0] == '1'){
		x=x+A[i];
		cout << " called: " << endl;
		letterCombinationsutil(x,A,i+1,ans);	
	}
	else{
		int t=(A[i]-'0');
		letterCombinationsutil(x+arr[t][0],A,i+1,ans);
		letterCombinationsutil(x+arr[t][1],A,i+1,ans);
		letterCombinationsutil(x+arr[t][2],A,i+1,ans);
		if(t == 7 || t==9)
			letterCombinationsutil(x+arr[t][3],A,i+1,ans);
	}
	
	return;
}

vector<string> letterCombinations(string A){
	vector<string> ans;
	string c="";
	letterCombinationsutil(c,A,0,ans);
	return ans;
} 


int main(){

	vector<string> ans=letterCombinations("0");
	cout <<  ans.size() << endl;
	for(int i=0;i<ans.size();i++){
		cout << ans[i] << endl;
	}

	return 0;
}