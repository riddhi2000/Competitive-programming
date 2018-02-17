#include <bits/stdc++.h>
using namespace std;

bool isPalindrome(string A,int i,int j){
	while(i<j){
		if (A[i] != A[j]){
			return false;
		}
		i++;j--;
	}
	return true;
}

void F(vector<string> current,int i,string A,vector<vector<string > > &ans){
	if(i == A.length()){
		ans.push_back(current);
	}

	for(int j=0;j<A.length();j++){
		if(isPalindrome(A,i,j)){
			current.push_back(A.substr(i,j-i+1));
			F(current,j+1,A,ans);
			current.pop_back();
		}
	}
}

vector<vector<string> > partition(string A) {
   vector<vector <string > > ans;
   vector<string> current;
   F(current,0,A,ans);
   return ans;
}


int main(){
	return 0;
}