#include <bits/stdc++.h>
using namespace std;

int mpf,mpt,n,m;
int x[]={-1,-1,-1,1,1,1,0,0};
int y[]={-1,0,1,-1,0,1,-1,1};

int main(){
	int t;
	cin >> t;

	while(t--){
		cin >> n >> m;
		mpf=mpt=INT_MAX;

		int pf[11][11];
		for(int i=1;i<=n;i++)
			for(int j=1;j<=m;j++)
				cin >> pf[i][j];

		int pt[11][11];
		for(int i=1;i<=n;i++)
			for(int j=1;j<=m;j++)
				cin >> pt[i][j];

		
		dfs(pf,pt,0,0,1,1);

		cout << mpf << " " << mpt << endl;


	}
	return 0;
}