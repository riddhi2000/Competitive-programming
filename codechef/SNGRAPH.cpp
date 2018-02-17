#include <bits/stdc++.h>

using namespace std;

const int ROW=5,COL=5;

int isSafe(int M[][COL], int row, int col, bool visited[][COL]){
    return (row >= 0) && (row < ROW) &&     
           (col >= 0) && (col < COL) &&      
           (M[row][col] && !visited[row][col]); 
}
 
void DFS(int M[][COL], int row, int col, bool visited[][COL]){
    static int rowNbr[] = {-1, -1, -1,  0, 0,  1, 1, 1};
    static int colNbr[] = {-1,  0,  1, -1, 1, -1, 0, 1};
 
    visited[row][col] = true;
 
    for (int k = 0; k < 8; ++k)
        if (isSafe(M, row + rowNbr[k], col + colNbr[k], visited) )
            DFS(M, row + rowNbr[k], col + colNbr[k], visited);
}
 
int countIslands(int M[][COL]){
    bool visited[ROW][COL];
    memset(visited, 0, sizeof(visited));
 
    int count = 0;
    for (int i = 0; i < ROW; ++i)
        for (int j = 0; j < COL; ++j)
            if (M[i][j] && !visited[i][j]) {                         
                DFS(M, i, j, visited);     
                ++count;                  
            }
 
    return count;
}

int main(){
	int n,t,m,u,v;
	cin >> t;

	while(t--){
		cin >> n >> m;

		int graph[n][COL];
		int degree[n];

		for (int i = 0; i < n; ++i){
			for(int j=0;j<n;j++){
				graph[i][j]=0;
			}
		}

		for (int i = 0; i < m; ++i){
			cin >> u >> v;
			graph[u-1][v-1]=1;
			graph[v-1][u-1]=1;

			degree[u-1] += 1;
			degree[v-1] += 1;
		}

		for (int i = 0; i < n; ++i){
			for(int j=0;j<n;j++){
				if(degree[j] <= i){
					for(int k=0;k<n;k++){
						graph[j][k]=0;
						graph[k][j]=0;
					}
				}
			}
			cout << countIslands(graph) << " ";
		}
		cout << endl;

		
	}
	
	return 0;
}