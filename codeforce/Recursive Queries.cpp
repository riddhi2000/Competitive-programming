#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define pb push_back
#define pp pop_back
#define mp make_pair
#define MOD 1e9+7

int v[10][1000005];

ll fun(ll x){
	if(x < 10) return x;

	ll ans1=1;

	while(x){
		if(x%10 > 0){
			ans1=ans1*(x%10);
		}
		x/=10;
	}
	return fun(ans1);

}

int main(){
	ll q,l,r,k;
	cin >> q;

	

	for(int i=1;i<=1000000;i++){
		v[fun(i)][i]++;
	}

	for(int i=1;i<10;i++){
		for(int j=1;j<=1000000;j++){
			v[i][j]+=v[i][j-1];
		}
	}

	while(q--){

		cin >> l >> r >> k;

		cout << v[k][r]-v[k][l-1] << endl;

	}	
}