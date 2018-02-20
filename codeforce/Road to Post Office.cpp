#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define pb push_back
#define pp pop_back
#define mp make_pair
#define MOD 1e9+7

int main(){
	ll d,k,a,b,t;
	cin >> d >> k >> a >> b >> t;

	ll s=0,ans=0;
	while(s < d){
		ans+=min(k,d-s);
		s+=min(k,d-s);

		if(s < d){
			
		}
	}

	cout << ans << endl;	
}