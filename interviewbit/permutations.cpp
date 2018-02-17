#include <bits/stdc++.h>
using namespace std;

void p(vector<int> &A,vector<int> &cur,vector<vector<int> > &ans){
	if(A.size() == 0){
		ans.push_back(cur);
		return;
	}
	for(int i=0;i<A.size();i++){
		cur.push_back(A[i]);
		vector<int> x=A;
		x.erase(x.begin()+i);
		p(x,cur,ans);
		cur.pop_back();
	}
	return;
}


vector<vector<int> > permute(vector<int> &A) {
        vector<vector<int> > ans;
        vector<int> cur;
        p(A,cur,ans);
        return ans;
}

int main(){
	vector<int> a;
	a.push_back(1);
	a.push_back(2);
	a.push_back(3);

	vector<vector<int > > v=permute(a);
	// cout << "here" << v.size() << endl;


	for(int i=0;i<v.size();i++){
		for(int j=0;j<v[i].size();j++){
			cout << v[i][j] << " ";
		}
		cout << endl;
	}


	return 0;
}