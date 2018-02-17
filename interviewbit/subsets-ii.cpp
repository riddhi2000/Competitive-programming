#include <bits/stdc++.h>
using namespace std;

void F(vector<int> A,vector<int> cur,vector<vector<int> > &ans,int index){
	int n=A.size();
	if(index == n){
		if(find(ans.begin(),ans.end(),cur) == ans.end() )
		ans.push_back(cur);
		return;
	}
	cur.push_back(A[index]);
	F(A,cur,ans,index+1);
	cur.pop_back();
	F(A,cur,ans,index+1);
}


vector<vector<int> > subsetsWithDup(vector<int> &A) {
    vector<vector <int > > ans;
    vector<int> cur;
    sort(A.begin(),A.end());
    F(A,cur,ans,0);
    sort(ans.begin(),ans.end());
    return ans;
}


int main(){

	vector<int> A;
	A.push_back(1);
	A.push_back(2);
	A.push_back(2);
	

	vector<vector<int> > v=subsetsWithDup(A);

	for(int i=0;i<v.size();i++){
		for(int j=0;j<v[i].size();j++)
			cout << v[i][j] << " ";
		cout << endl;
	}


	return 0;
}