#include <bits/stdc++.h>
#define NIL -1
using namespace std;

class Graph{
    int V;
    list<int> *adj;
    void SCCUtil(int u, int disc[], int low[],
                 stack<int> *st, bool stackMember[],vector<map<int,bool> > &vec);
public:
    Graph(int V); 
    void addEdge(int v, int w);  
    void SCC(vector<map<int,bool> > &vec);
};
 
Graph::Graph(int V){
    this->V = V;
    adj = new list<int>[V];
}
 
void Graph::addEdge(int v, int w)
{
    adj[v].push_back(w);
}
 
void Graph::SCCUtil(int u, int disc[], int low[], stack<int> *st,
                    bool stackMember[],vector<map<int,bool> > &vec)
{
    
    static int time = 0;
    disc[u] = low[u] = ++time;
    st->push(u);
    stackMember[u] = true;
 
    list<int>::iterator i;
    for (i = adj[u].begin(); i != adj[u].end(); ++i)
    {
        int v = *i;
        if (disc[v] == -1){
            SCCUtil(v, disc, low, st, stackMember,vec);
            low[u]  = min(low[u], low[v]);
        }
         else if (stackMember[v] == true)
            low[u]  = min(low[u], disc[v]);
        }
 
    // head node found, pop the stack and print an SCC
    int w = 0;  // To store stack extracted vertices
    if (low[u] == disc[u])
    {   map<int,bool> temp;
        while (st->top() != u)
        {
            w = (int) st->top();
            temp[w]=true;
            stackMember[w] = false;
            st->pop();
        }
        w = (int) st->top();
        temp[w]=true;
        vec.push_back(temp);
        stackMember[w] = false;
        st->pop();
    }
}

void Graph::SCC(vector<map<int,bool> > &vec)
{
    int *disc = new int[V];
    int *low = new int[V];
    bool *stackMember = new bool[V];
    stack<int> *st = new stack<int>();

    for (int i = 0; i < V; i++)
    {
        disc[i] = NIL;
        low[i] = NIL;
        stackMember[i] = false;
    }
    for (int i = 0; i < V; i++)
        if (disc[i] == NIL)
            SCCUtil(i, disc, low, st, stackMember,vec);
}

int findStreets(int n, vector< vector<int> > street) {
    Graph g(n);
    int count=0;
    for(int i=0;i<street.size();i++){
        g.addEdge(street[i][0]-1,street[i][1]-1);
    }
    vector<map<int,bool> > vec;
    g.SCC(vec);

    for(int i=0;i<street.size();i++){
        int x=street[i][0]-1;
        int y=street[i][1]-1;
        for(int j=0;j<vec.size();j++){
            if(vec[j].count(x) && vec[j].count(y)){
                count++;break;
            }
        }
    }
    
    return count;
}

int main() {
    int t;
    cin >> t;
    for(int a0 = 0; a0 < t; a0++){
        int n;
        int m;
        cin >> n >> m;
        vector< vector<int> > street(m,vector<int>(2));
        for(int street_i = 0;street_i < m;street_i++){
           for(int street_j = 0;street_j < 2;street_j++){
              cin >> street[street_i][street_j];
           }
        }
        int result = findStreets(n, street);
        cout << result << endl;
    }
    return 0;
}
