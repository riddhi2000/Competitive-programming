#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define pb push_back
#define pp pop_back
#define mp make_pair
#define MOD 1e9+7

int main(){
	long long n,k;
	cin >> n >> k;

	long long i=1;
	long long ans=n;

	while(i<=n){
		ans|=i;
		i*=2;
	}

	if(k > 1){
		cout << ans << endl;
	}
	else{
		cout << n << endl;
	}
}