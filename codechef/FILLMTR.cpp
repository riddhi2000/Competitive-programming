#include<bits/stdc++.h>
using namespace std;

class Graph{
    int V;
    list<int> *adj;
    void topologicalSortUtil(int v, bool visited[], stack<int> &Stack);
public:
    Graph(int V);
    void addEdge(int v, int w);
    bool topologicalSort(map<int,vector<pair<int,int> > > );
};
 
Graph::Graph(int V){
    this->V = V;
    adj = new list<int>[V];
}
 
void Graph::addEdge(int v, int w){
    adj[v].push_back(w);
}

void Graph::topologicalSortUtil(int v, bool visited[], stack<int> &Stack){ 
    visited[v] = true;
    list<int>::iterator i;
    for (i = adj[v].begin(); i != adj[v].end(); ++i)
        if (!visited[*i])
            topologicalSortUtil(*i, visited, Stack);
    Stack.push(v);
}
 
bool Graph::topologicalSort(map<int,vector<pair<int,int> > > m){
    stack<int> Stack;
    bool *visited = new bool[V];
    for (int i = 0; i < V; i++)
        visited[i] = false;

    for (int i = 0; i < V; i++)
      if (visited[i] == false)
        topologicalSortUtil(i, visited, Stack);
 
 	vector<int> arr(V,-1);

    while (Stack.empty() == false){
        int u=Stack.top();
        if(arr[u] == -1){
        	arr[u]=1;
        }
        vector<pair<int,int> > vn=m[u];

        for(int i=0;i<vn.size();i++){
        	int v=vn[i].first;
        	int val=vn[i].second;

        	if(arr[v] == -1){
        		arr[v]=abs(arr[u]-val);
        	}
        	else if(abs(arr[v]-arr[u]) != val)
        		return false;
        }

        Stack.pop();
    }
    return true;
}

int main(){
	int t,n,q;
	cin >> t;

	while(t--){
		cin >> n >> q;

		Graph g(n);
		bool flag=true;
		map<int,vector<pair<int,int> > > m;
		int i,j,val;

		for(int k=0;k<q;k++){
			cin >> i >> j >> val;
			i--;j--;
			g.addEdge(i,j);
			g.addEdge(j,i);
			m[i].push_back({j,val});
			m[j].push_back({i,val});
		}

		flag = g.topologicalSort(m);

		if(flag == false)
			cout << "no" << endl;
		else
			cout << "yes" << endl;
	}
}