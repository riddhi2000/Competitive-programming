#include <bits/stdc++.h>
using namespace std;
const int mod=1e9+7;

int main(){

	int t;
	long long int ans;
	cin >> t;
	
	while(t--){
		long long int p,q,r;
		cin >> p >> q >> r;

		long long int a[p],b[q],c[r];

		for(int i=0;i<p;i++)
			cin >> a[i];
		for(int i=0;i<q;i++)
			cin >> b[i];
		for(int i=0;i<r;i++)
			cin >> c[i];


		ans=0;

		for(int i=q-1;i>=0;i--){
			for(int j=0;j<p;j++){
				if(a[j] > b[i])
					continue;
				long long int x=(a[j]+b[i])%mod;
				for(int k=0;k<r;k++){
						if(b[i] < c[k])
							continue;
						long long int y=(b[i]+c[k])%mod;
						y = (x*y)%mod;
						ans =(ans+y)%mod;	
				}
			}	
		}
		cout << ans << endl;
	}
	
	return 0;
}