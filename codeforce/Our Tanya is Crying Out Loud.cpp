#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define pb push_back
#define pp pop_back
#define mp make_pair
#define MOD 1e9+7

ll n,k,a,b;

int main(){
	
	cin >> n >> k >> a >> b;

	ll ans=0;

	while(n>1){

		if(k == 1){
			n--;
			ans+=n*a;
			n=1;
		}
		else if(n>1 && n%k != 0){
			if(k > n){
				ans+=a*(n-1);
				n=1;
			}
			else{
				int y=n%k;
				ans+=(y*a);
				n-=y;
			}
		}
		else if(n>1){
			int x=n-n/k;
			ans+=min(a*x,b);
			n=n/k;
		}

	}

	cout << ans << endl;	
}