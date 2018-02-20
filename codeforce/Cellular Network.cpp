#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define pb push_back
#define pp pop_back
#define mp make_pair
#define MOD 1e9+7

int main(){
	int n,m;
	cin >> n >> m;

	vector<ll>a(n);
	for(int i=0;i<n;i++){
		cin >> a[i];
	}

	vector<ll> b(m);
	for(int i=0;i<m;i++){
		cin >> b[i];
	}

	ll r=0;

	for(int i=0,j=0;i<n;i++){

		ll x=abs(a[i]-b[j]);
		while(j+1<m && abs(a[i]-b[j]) >= abs(a[i]-b[j+1])){
			j++;
		}
		x=min(x,abs(a[i]-b[j]));
		r=max(r,x);

	}	

	cout << r << endl;
}