#include<bits/stdc++.h>
using namespace std;


int dx[4]={1,-1,0,0};
int dy[4]={0,0,1,-1};

void print(vector<vector<int> > c,int n){
	cout << "========" << endl;
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			cout << c[i][j] << " ";
		}
		cout << endl;
	}
	cout << "========" << endl;
}


void bfs(vector<vector<int> > &a,vector<vector<int> > &c,int n,int x,int y){
	// cout << x << "  " << y << " " << c[x][y] << endl;
	// print(c,n);

	if(x==n-1 && y==n-1){
		return;
	}

	for(int i=0;i<4;i++){
		int xx=x+dx[i];
		int yy=y+dy[i];

		if(xx>=0 && xx<n && yy>=0 && yy<n){
			if(c[x][y]!=INT_MAX &&  c[xx][yy] > c[x][y]+a[xx][yy] ){
				c[xx][yy]=c[x][y]+a[xx][yy];
				bfs(a,c,n,xx,yy);
			}
		}

	}

}


int main(){
	int t,n;
	cin >> t;

	while(t--){
		
		cin >> n;
		vector<vector<int> > a(n,vector<int>(n));

		for(int i=0;i<n;i++){
			for(int j=0;j<n;j++){
				cin >> a[i][j];
			}
		}

		vector<vector<int> > c(n,vector<int>(n,INT_MAX));
		c[0][0]=a[0][0];
		bfs(a,c,n,0,0);

		cout << c[n-1][n-1] << endl;
	}
}