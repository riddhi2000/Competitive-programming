#include <bits/stdc++.h>
using namespace std;
int ans=0;

class Graph
{
    int V;  
    list<int> *adj; 
    void printAllPathsUtil(int , int , bool [], int [], int &);
 
public:
    Graph(int V); 
    void addEdge(int u, int v);
    void printAllPaths(int s, int d);
};
 
Graph::Graph(int V){
    this->V = V;
    adj = new list<int>[V];
}
 
void Graph::addEdge(int u, int v){
    adj[u].push_back(v); 
}

void Graph::printAllPaths(int s, int d){
    
    bool *visited = new bool[V];
    ans=0;

    int *path = new int[V];
    int path_index = 0;
 
    for (int i = 0; i < V; i++)
        visited[i] = false;
 
    printAllPathsUtil(s, d, visited, path, path_index);
}

void Graph::printAllPathsUtil(int u, int d, bool visited[],
                              int path[], int &path_index){
   
    visited[u] = true;
    path[path_index] = u;
    path_index++;
 
    
    if (u == d){
        ans=(ans+1)%998244353;
    }
    else{
        list<int>::iterator i;
        for (i = adj[u].begin(); i != adj[u].end(); ++i)
            if (!visited[*i])
                printAllPathsUtil(*i, d, visited, path, path_index);
    }
 
    path_index--;
    visited[u] = false;
}

int main(){
	int t,s,d;
	cin >> t;
	string ts,td;

	while(t--){
		cin >> ts >> td;
		s= stoi(ts, nullptr, 2);
		d= stoi(td, nullptr, 2);

		int v=max(s,d);
		Graph g(10000);

		for(int i=0;i<=v;i++){
			for(int j=i+1;j<=v;j++){
				if((i & j) == 0)
					g.addEdge(i,j);
			}
		}

		g.printAllPaths(s, d);
		cout << ans << endl;
	}
	
	return 0;
}

  