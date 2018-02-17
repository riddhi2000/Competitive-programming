#include<bits/stdc++.h>
#define ll long long
using namespace std;

int main(){
	int t,n;
	cin >> t;

	while(t--){
		cin >> n;
		ll ans=1;

		for(int i=2;i<=sqrt(n+1);i++){
			int j=n/i;

			if(i<=j && i*j==n){
				ans*=i;
				if(i != j)
				ans*=j;
			}
			ans=ans%10000;
		}
		cout << ans << endl;
	}
}