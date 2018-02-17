#include <bits/stdc++.h>
using namespace std;


int dx[] = {-2, -1, 1, 2, -2, -1, 1, 2};
int dy[] = {-1, -2, -2, -1, 1, 2, 2, 1};

int ans=-1;
int n,m;

bool isValid(int x,int y){
    if(x>=1 && x<=n && y>=1 && y<=m)
        return true;
    return false;
}

int knight(int N, int M, int x1, int y1, int x2, int y2) {
    n=N;
    m=M;
    
    vector<vector<int > > board(N+1,vector<int>(M+1,-1));
    board[x1][y1]=0;
    vector<vector<bool> > visited(N+1,vector<bool>(M+1,false));
    queue<pair<int,int > > q;
    q.push(make_pair(x1,y1));
    
    while(!q.empty()){
        int x=q.front().first;
        int y=q.front().second;

        cout << x << " " << y << " "<< board[x][y] << endl;
        
        if(x==x2 && y==y2)
            return board[x2][y2];
        q.pop();
        visited[x][y]=true;
        
        for(int k=0;k<8;k++){
            int tx=x+dx[k],ty=x+dy[k];
            cout << tx << " "<< ty << "::::" << endl;
            if(isValid(tx,ty) && visited[tx][ty]==false ){
                board[tx][ty]=board[x][y]+1;
                q.push(make_pair(tx,ty));
            }
        }
    }
    
    return board[x2][y2];
}

int main(int argc, char const *argv[])
{
    cout << knight(8,8,1,1,8,8) << endl;
    return 0;
}