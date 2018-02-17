#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define pb push_back
#define pp pop_back
#define mp make_pair
#define MOD 1e9+7


int main(){
	int T,a,n,p;
	cin >> T;

	for(int t=1;t<=T;t++){
		cin >> a >> n >> p;

		long long ans=1;
		if(n == 0){
			ans=1;
		}
		else{
			ans=a%p;
			for(int i=2;i<=n;i++){
				long long z=ans;
				ans=(z*a)%p;
			}
		}

		cout << "Case #" << t << ": " << ans << endl;
	}	
}