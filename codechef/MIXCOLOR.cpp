#include<bits/stdc++.h>
using namespace std;

#define ll long long

int main(){
	int t,n;
	cin >> t;

	while(t--){
		cin >> n;

		vector<int> v(n);
		map<int,int> m;

		for(int i=0;i<n;i++){
			cin >> v[i];
			m[v[i]]++;
		}

		ll ans=0;

		for(auto& it: m){
			ans+=it.second-1;
		}

		cout << ans << endl;
	}
}