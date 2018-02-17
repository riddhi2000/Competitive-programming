#include <bits/stdc++.h>
using namespace std;

	bool isA(vector<int> sol,int i,int j){
		for(int k=0;k<i;k++){
			if(j==sol[k] || i+j==k+sol[k] || i-j==k-sol[k])
				return false;
		}
		return true;
	}

	vector<string> solToString(vector<int> sol){
		int n=sol.size();
		vector<string> sol_string(n);
		for(int i=0;i<n;i++){
			sol_strings[i]=string(n,'.');
			sol_strings[i][sol[i]]='Q';
		}
		return sol_strings;
	}

	void F(int row,vector<int> sol,vector<vector<string> > ans){
		int n=sol.size();
		if(row == n){
			ans.push_back(solToStrings(sol));
            return;
		}
		for(int j=0;j<n;j++){
			if(isA(sol,row,j)){
				sol[row]=j;
				F(row+1,sol,ans);
			}
		}
	}


vector<vector<string> > solveNQueens(int A) {
    vector < vector <string> > ans;
   	vector<int> sol(A);
   	F(0,sol,ans);
   	return ans;
}

int main(){
	return 0;
}