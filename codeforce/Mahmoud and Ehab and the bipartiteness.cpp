#include<bits/stdc++.h>
using namespace std;

int main(){
	long long t,n,u,v;
	cin >> n;

	vector<vector<int> > ve(n+1);
	for(int i=0;i<n-1;i++){
		cin >> u >> v;
		ve[u].push_back(v);
		ve[v].push_back(u);
	}

	vector<int> vec(n+1,0);
	long long  l=1,r=0;
	queue<long long> q;
	q.push(1);
	vec[1]=-1;

	while(!q.empty()){
		int x=q.front();
		q.pop();

		for(int i=0;i<ve[x].size();i++){
			if(vec[ve[x][i]] == 0){
				if(vec[x] == -1){
					vec[ve[x][i]]=1;
					r++;
				}
				else{
					vec[ve[x][i]]=-1;
					l++;
				}
				q.push(ve[x][i]);
			}
		}
	}


	cout << (l*r)-(n-1) << endl;

}