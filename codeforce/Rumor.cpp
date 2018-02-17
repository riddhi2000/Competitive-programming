#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define pb push_back
#define pp pop_back
#define mp make_pair
#define MOD 1e9+7

int dfs(int u,vector<int> adj[],vector<bool> &visit,vector<int> &c,int &val){

	for(int i=0;i<adj[u].size();i++){
		int v=adj[u][i];
		if(visit[v]==false){
			visit[v]=true;
			val=min(val,c[v-1]);
			val=min(val,dfs(v,adj,visit,c,val));
		}
	}

	return val;
}

int main(){
	int n,m,x, y;
	cin >> n >> m;

	vector<int> c(n);
	for(int i=0;i<n;i++)
		cin >> c[i];

	vector<int> adj[n+1];

	for(int i=0;i<m;i++){
		cin >> x >> y;
		adj[x].push_back(y);
		adj[y].push_back(x);
	}

	vector<bool> visit(n+1,false);
	long long ans=0;

	for(int i=1;i<=n;i++){
		if(visit[i] == false){
			visit[i]=true;
			ans +=dfs(i,adj,visit,c,c[i-1]);
		}
	}

	cout << ans << endl;
}