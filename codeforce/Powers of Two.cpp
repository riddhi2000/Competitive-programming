#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define pb push_back
#define pp pop_back
#define mp make_pair
#define MOD 1e9+7

int main(){
	ll n,ans;
	cin >> n;

	vector<ll> vv;
	ll x=2;

	while(x <= 1000000000000000000){
		vv.pb(x);
		x*=2;
	}


	map<int,vector<int> > m;

	vector<int> v(n);
	
	for(int i=0;i<n;i++){
		cin >> v[i];
		m[v[i]].pb(i);
	}
	ans=0;

	//cout << vv.size() << endl;

	for(int i=0;i<n;i++){
		for(int j=0;j<vv.size();j++){
			if(vv[j]>v[i] && m.find(vv[j]-v[i])!=m.end()){

				ans+=lower_bound(m[vv[j]-v[i]].begin(),m[vv[j]-v[i]].end(),i)-m[vv[j]-v[i]].begin();
				// for(auto it : m[vv[j]-v[i]]){
				// 	if( it > i){
				// 		//cout << it << " " << v[i] << " " << vv[j] << endl; 
				// 		ans++;
				// 	}
				// }

			}
		}
	}

	cout << ans << endl;	
}