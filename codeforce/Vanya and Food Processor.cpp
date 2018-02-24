#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define pb push_back
#define pp pop_back
#define mp make_pair
#define MOD 1e9+7

int main(){
	ll n,h,k;
	cin >> n >> h >> k;

	ll ans=0;

	vector<ll> a(n);
	for(int i=0;i<n;i++){
		cin >> a[i];
	}

	ll in=0;
	int ci=0;

	while(ci < n){

		while(ci<n && in+a[ci] <= h){
			in+=a[ci++];
		}

		if(in < k){
			ans++;in=0;
		}
		else{
			ans+=in/k;
			in%=k;
		}

		//cout << in << " " << ci << endl;

	}

	if(in > 0){
		ans++;
	}

	cout << ans << endl;

}