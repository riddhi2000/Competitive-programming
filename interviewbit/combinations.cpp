#include <bits/stdc++.h>
using namespace std;

void F(int n,int k,vector<int> &cur,vector<vector<int> > &ans,int start,int count){
	if(count == k){
		ans.push_back(cur);
		return;
	}
	for(int i=start;i<=n;i++){
		cur.push_back(i);
		F(n,k,cur,ans,i+1,count+1);
		cur.pop_back();
	}
	return;
}

vector<vector<int> > combine(int n, int k) {
   vector<vector<int > > ans;
   vector<int> cur;
   F(n,k,cur,ans,1,0);
   return ans;    
}

int main(){

	vector<vector<int> > v=combine(4,2);

	for(int i=0;i<v.size();i++){
		for(int j=0;j<v[i].size();j++)
			cout << v[i][j] << " ";
		cout << endl;
	}

	return 0;
}
