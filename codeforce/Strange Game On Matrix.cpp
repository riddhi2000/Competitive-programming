#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define pb push_back
#define pp pop_back
#define mp make_pair
#define MOD 1e9+7

int main(){
	int n,m,k;
	cin >> n >> m >> k;

	vector<vector<int> > v(n,vector<int>(m));

	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++){
			cin >> v[i][j];
		}
	}

	int ans=0,replace=0;

	for(int j=0;j<m;j++){
		int cs=0,re=0;
		int tre=0;
		for(int i=0;i<n;i++){
			int ts=0;

			if(v[i][j] == 1){
				ts=0;
				
				for(int p=i;p<n && p<i+k;p++){
					if(v[p][j] == 1)
						ts++;
				}
			}
			if(ts > cs){
				cs=ts;re=tre;
			}
			if(v[i][j] == 1)
				tre++;
		}
		ans+=cs;replace+=re;
	}

	cout << ans << " " << replace << endl;	
}