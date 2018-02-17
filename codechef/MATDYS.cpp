#include <bits/stdc++.h>
using namespace std;


int main(){
	unsigned long long t,n,k;
	cin >> t;

	while(t--){
		cin >> n >> k;
		unsigned long long ans=0;

		for(int i=0;i<n;i++){
			int x=k%2;
			ans=(ans*2)+x;
			k/=2;
		}

		cout << ans << endl;
	}
}