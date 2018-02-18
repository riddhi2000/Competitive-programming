#include<bits/stdc++.h>
using namespace std;

#define ll long long

int main(){
	ll t,n,k,b;
	cin >> t;

	while(t--){
		cin >> n >> k >> b;

		vector<ll> a(n);
		
		for(int i=0;i<n;i++){
			cin >> a[i];
		}

		sort(a.begin(),a.end());
		
		ll ans=1,pn=a[0];
		
		for(int i=1;i<n;i++){
			if(a[i] >= pn*k+b){
				pn=a[i];ans++;
			}
		}


		cout << ans << endl;
	}
}