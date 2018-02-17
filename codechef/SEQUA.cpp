#include <bits/stdc++.h>
using namespace std;
int n,m;

long long int power(int x,int y){
	if(y == 0) return 1;
	if(y == 1) return x;

	long long int ans=(power(x,y/2))%m;
	ans=(ans*ans)%m;
	if(y%2 == 1)
		ans=(ans*x)%m;
	return ans;
}

int main(){
	int t;
	cin >> t;
	vector<int> a(1e9+1,0);

	while(t--){
		cin >> n >> m;
		long long int ans=0;

		for(int i=0;i<=n;i++){
			i%=m;
			if(a[i] != 0)
				ans=(ans+a[i])%m;
			else{
				a[i]=power(i,i)%m;
				ans=(ans+a[i])%m;
			}
		}
		cout << ans << endl;

	}
	return 0;
}