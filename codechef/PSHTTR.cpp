#include <bits/stdc++.h>
using namespace std;

class Graph{
	int V;
	list<pair<int,int> > *adj;
public:
	Graph(int v){
		V=v;
		adj=new list<pair<int,int> >[v];
	}

	void addEdge(int u,int v,int c){
		adj[u].push_back(make_pair(v,c));
		adj[v].push_back(make_pair(u,c));
	}

	void dfs(int u,int v,vector<bool> &visited,int k,int ans){
		visited[u]=true;
		cout << u << " " <<  ans << endl;
		if(u == v) cout << ans << endl; return;
		list<pair<int,int> > :: iterator it;
		for(it=adj[u].begin();it!=adj[u].end();it++){
			cout << "here: " << (*it).first << endl;
			if(visited[(*it).first] == false){
				if((*it).second <= k) ans=((*it).second)^ans;
				dfs((*it).first,v,visited,k,ans);
				if((*it).second <= k) ans=((*it).second)^ans;
			}
		}
	}

	void find(int u,int v,int k){
		int ans=0;
		vector<bool> visited(V,false);
		dfs(u,v,visited,k,ans);
	}

};

int main(){
	int T;
	cin >> T;
	
	while(T--){
		int n,u,v,c,k;
		cin >> n;
		Graph g(n);

		for(int i=1;i<n;i++){
			cin >> u >> v >> c;
			g.addEdge(u-1,v-1,c);
			cout << u-1 << " " << v-1 << endl;
		}
		int m;
		cin >> m;

		for(int i=0;i<m;i++){
			cin >> u >> v >> k;
			g.find(u-1,v-1,k);
			cout << u-1 << " " << v-1 << endl;
		}
	}

	return 0;
}

  