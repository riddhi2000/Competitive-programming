#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define pb push_back
#define pp pop_back
#define mp make_pair
#define MOD 1e9+7

int main(){
	int n,m,k;
	long long ans=0;

	cin >> n >> m >> k;

	ans=0;

	vector<vector<char> > v(n,vector<char>(m));

	for(int i=0;i<n;i++){
		int t=0;
		for(int j=0;j<m;j++){
			
			cin >> v[i][j];
			if(v[i][j] == '.'){
				t++;
			}
			else{
				t=0;
			}
			if(t >= k){
				ans++;
			}

		}
	}


	if(k != 1){
		for(int i=0;i<m;i++){
			int t=0;
			for(int j=0;j<n;j++){
				if(v[j][i] == '.'){
					t++;
				}
				else{
					t=0;
				}
				if(t >= k){
					ans++;
				}

			}
		}
	}
	



	cout << ans << endl;	
}