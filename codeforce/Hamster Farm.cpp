#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define pb push_back
#define pp pop_back
#define mp make_pair
#define MOD 1e9+7

int main(){
	ll n,k;
	cin >> n >> k;

	vector<ll> v(k);
	for(int i=0;i<k;i++){
		cin >> v[i];
	}

	ll type=0,r=n%v[0];

	for(int i=1;i<k;i++){
		if(n%v[i] < r){
			type=i;r=n%v[i];
		}
	}
	
	cout << type+1 << " " << n/v[type] << endl;
}