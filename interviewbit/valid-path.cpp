#include <bits/stdc++.h>
using namespace std;
#define MAX 105 

int mat[MAX][MAX]; 
int visited[MAX][MAX]; 
int max_x, max_y;

int X[]={0,1,0,1,-1,0,-1,0};
int Y[]={1,0,0,1,0,0,-1,-1};

bool dist(int x,int y,int x1,int y1,int r){
	if((x-x1)*(x-x1)+(y-y1)*(y-y1) <= r)
		return true;
	return false;
}

bool valid(int x,int y){
	if(x>=0 && x<=max_x && y>=0 && y<=max_y && mat[x][y]==0 
		&& visited[x][y]==0)
		return true;
	return false;
}

string solve(int A, int B, int N , int R ,vector<int> &E, vector<int> &F) { 
	memset(mat, 0 , sizeof(mat)); 
	memset(visited, 0 , sizeof(visited)); 
	max_x = A; max_y = B; 
	vector<pair<int, int> > v; 

	for(int i = 0; i < N; i++) { 
		v.push_back(make_pair(E[i], F[i])); 
	}

	for(int i = 0; i <= A+ 1; i++) { 
		for(int j = 0; j <= B+1; j++) { 
			bool flag = true; 
			for(int k = 0; k < N; k++) { 
				if(dist(i, j , v[k].first , v[k].second, R)) { 
					flag = false; 
					break; 
				} 
			} 
			if(flag) { 
				mat[i][j] = 0; 
			} 
			else { 
				mat[i][j] = 1; 
			} 
		}
	}

	if(mat[0][0] == 1 || mat[A][B] == 1) { 
		return "NO";
	}
	else{ 
		visited[0][0] = 1; 
		queue<pair<int,int> > q;
		q.push(make_pair(0,0));

		while(!q.empty()){
			int tx=q.back().first;
			int ty=q.back().second;

			q.pop();

			if(tx==A && ty==B)
				return "YES";

			for(int i=0;i<8;i++){
				int g=tx+X[i];
				int h=ty+Y[i];

				if(visited[g][h] ==0 && mat[g][h]==0){
					visited[g][h]=1;
					q.push(make_pair(g,h));
				}
			}


		}


	}
	return "NO"; 
}


int main(int argc, char const *argv[]){
	
	return 0;
}