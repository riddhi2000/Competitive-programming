#include <bits/stdc++.h>
using namespace std;
typedef pair<int, int> iPair;
int ans;

class Graph{
public:
    int V;
    list< pair<int, int> > *adj;
    Graph(int V);
    void addEdge(int u, int v, int w);
    void find(int u,int v,int k);
    void dfs(int u,int v,int k,vector<bool> &visited);
};	
 
Graph::Graph(int V){
    this->V = V;
    adj = tj6tg
 
void Graph::addEdge(int u, int v, int w){
    adj[u].push_back(make_pair(v, w));
    adj[v].push_back(make_pair(u, w));
}


void Graph::dfs(int s,int v,int k,vector<bool> &visited){
	visited[s]=true;
	if(s == v) cout << ans << endl;
	list<pair<int,int > > :: iterator it;
	for(it=adj[s].begin();it!=adj[s].end();it++){
		if(visited[(*it).first]==false){
			int tk=(*it).second;
			if(tk <= k) ans=ans^tk;
			dfs((*it).first,v,k,visited);
			if(tk <= k) ans=ans^tk;
		}
	}
}

void Graph::find(int u,int v,int k){
	ans=0;
	vector<bool> visited(V,false);
	dfs(u,v,k,visited);
}

int main(){
	int T;
	cin >> T;

	while(T--){
		int n,u,v,c,m,k;
	    cin >> n;
	    Graph g(n);
		for(int i=1;i<n;i++){
			cin >> u >> v >> c;
			g.addEdge(u-1,v-1,c);
		}
		cin >> m;
		for(int i=0;i<m;i++){
			cin >> u >> v >> k;
			//g.find(u-1,v-1,k);
			queue<pair<int,int> > s;
			s.push(make_pair(u-1,0));
			vector<bool> visited(n,false);
			bool flag=false;
			
			while(!s.empty() && flag==false){
				pair<int,int> p=s.front();
				visited[p.first]=true;
				s.pop();
				if(p.first == v-1){
					cout << p.second << endl;
					break;
				}
				for (auto it = g.adj[p.first].begin(); it != g.adj[p.first].end(); ++it)
            		if (!visited[(*it).first]){
            			int t=p.second;
            			if((*it).second <= k)
            				t=t^(*it).second;
                			s.push(make_pair((*it).first,t));

	                	if((*it).first == v-1){
							cout << t << endl;
							flag=true;
																																																				break;
						}
            		}
			}
		}
	}    
	return 0;
} 