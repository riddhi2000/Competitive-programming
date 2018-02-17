#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define pb push_back
#define pp pop_back
#define mp make_pair
#define MOD 1e9+7


void dfs(int u, vector<bool> &visit, vector<ll> &a, vector<ll> &b, vector<pair<ll,ll> > v[]){

	for(auto it=v[u].begin(); it!=v[u].end(); it++){

		b[u] = min( b[u], it->second + it->second + a[it->first]);

		b[it->first] = min( b[it->first], it->second + it->second + a[u]);

		if(visit[it->first] == false){

			visit[it->first] = true;
			dfs(it->first, visit, a, b, v);

		}

	}

}

int main(){
	
	ll n,m,x,y,z;
	cin >> n >> m;

	vector<pair<ll,ll> > v[n+5];

	for(int i=0;i<m;i++){
		cin >> x >> y >> z;
		v[x].pb(mp(y,z));
		v[y].pb(mp(x,z));
	}

	vector<ll> a(n+1);
	for(int i=1;i<=n;i++)
		cin >> a[i];

	vector<bool> visit(n+1,false);

	vector<ll> b=a;

	for(int i=n;i>=1;i--){

		if(visit[i] == false){
			visit[i]=true;
			dfs(i,visit,a,b,v);
		}

	}

	for(int i=1;i<=n;i++){
		cout << b[i] << " ";
	}
	cout << endl;

}