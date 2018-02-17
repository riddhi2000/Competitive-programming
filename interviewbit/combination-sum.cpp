#include <bits/stdc++.h>
using namespace std;


void F(vector<int> A,int B,vector<int> sol,vector<vector<int> > &ans){
	if(B <= 0){
		sort(sol.begin(),sol.end());
		if(B == 0 && find(ans.begin(),ans.end(),sol) == ans.end() ){
			ans.push_back(sol);
		}	
			return;
	}
	
	for(int i=0;i<A.size();i++){
		if(A[i] <= B){
			sol.push_back(A[i]);
			F(A,B-A[i],sol,ans);
			sol.pop_back();
		}
	}
	return;
}

vector<vector<int> > combinationSum(vector<int> &A, int B) {
   vector<vector<int> > ans;
   vector<int> sol;
   F(A,B,sol,ans);
   sort(ans.begin(),ans.end());
   return ans;	 
}

int main(){
	vector<int> A;
	A.push_back(8);
	A.push_back(10);
	A.push_back(6);
	A.push_back(11);
	A.push_back(1);
	A.push_back(16);
	A.push_back(8);

	vector<vector<int> > v=combinationSum(A,28);

	for(int i=0;i<v.size();i++){
		for(int j=0;j<v[i].size();j++)
			cout << v[i][j] << " ";
		cout << endl;
	}


	return 0;
}