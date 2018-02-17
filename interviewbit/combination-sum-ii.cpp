#include <bits/stdc++.h>
using namespace std;

void F(vector<int> A,vector<int> cur,vector<vector<int > > &ans,int B){
	if(B <= 0){
		sort(cur.begin(),cur.end());
		if(B == 0 && find(ans.begin(),ans.end(),cur) == ans.end()){
			ans.push_back(cur);
		}	
		return;
	}
	for(int i=0;i<A.size();i++){
		//cout << A.size() << endl;
		if(A[i]<=B){
			cur.push_back(A[i]);
			vector<int> x=A;
			x.erase(x.begin()+i);
			F(x,cur,ans,B-A[i]);
			cur.pop_back();
		}
	}
	return;
}

vector<vector<int> > combinationSum(vector<int> A, int B) {
    vector<vector< int> > ans;
    vector<int> cur;
    sort(A.begin(),A.end());
    F(A,cur,ans,B);
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