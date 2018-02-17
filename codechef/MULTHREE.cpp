#include<bits/stdc++.h>
#define ll long long

using namespace std;

int main(){
	ll t,k,d0,d1;
	cin >> t;

	while(t--){
		cin >> k >> d0 >> d1;

		ll d2=(d0+d1);

		ll ans=d2;

		k-=2;

		ll sum=(2*d2)%10 + (4*d2)%10 + (8*d2)%10 + (6*d2)%10;

		if(k > 0){
			k--;
			ans+=d2%10;
		}

		ans+=sum*(k/4);
		k %= 4;

		if(k > 0){
			ans+=(2*d2)%10;
			k--;
		}
		if(k > 0){
			ans+=(4*d2)%10;
			k--;
		}
		if(k > 0){
			ans+=(8*d2)%10;
			k--;
		}
		

		if(ans%3 == 0){
			cout << "YES" << endl;
		}
		else{
			cout << "NO" << endl;
		}

	}
}