#include<bits/stdc++.h>
using namespace std;

long long int board[1010][1010];
long long int ans;
int r,c,n;
int x[15],y[15];

bool check(int tx,int ty){
	if(tx>=0 && tx<r && ty>=0 && ty<c )
		return true;
	return false;
}

void bfs(int sx,int sy,long long int C,int z){
	if(C > ans)
		ans=C;

	if(z <= 0)
		return;


	for(int i=0;i<n;i++){
		int tx,ty;

		tx=sx+x[i];ty=sy+y[i];
		if(check(tx,ty)){
			bfs(tx,ty,C+board[tx][ty],z-1);
		}

		tx=sx+x[i];ty=sy-y[i];
		if(check(tx,ty)){
			bfs(tx,ty,C+board[tx][ty],z-1);
		}

		tx=sx-x[i];ty=sy+y[i];
		if(check(tx,ty)){
			bfs(tx,ty,C+board[tx][ty],z-1);
		}

		tx=sx-x[i];ty=sy-y[i];
		if(check(tx,ty)){
			bfs(tx,ty,C+board[tx][ty],z-1);
		}
		
	}

}

int main(){
	int t,sx,sy;
	cin >> t;

	while(t--){
		cin >> r >> c >> n;
		cin >> sx >> sy;
		
		for(int i=0;i<n;i++)
			cin >> x[i];
		for(int i=0;i<n;i++)
			cin >> y[i];

		for(int i=0;i<r;i++){
			for(int j=0;j<c;j++)
				cin >> board[i][j];
		}
		ans=0;
		bfs(sx,sy,board[sx][sy],n);
		cout << ans << endl;

	}
}