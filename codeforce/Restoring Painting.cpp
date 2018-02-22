#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define pb push_back
#define pp pop_back
#define mp make_pair
#define MOD 1e9+7

int main(){
	int n,a,b,c,d;
	cin >> n >> a >> b >> c >> d;

	ll ans=0;

	int x=max(a+b,a+c);
	x=max(b+d,max(c+d,x));

	int y=min(a+b,a+c);
	y=min(b+d,min(c+d,y));

	for(int i=1;i<=n;i++){
		int p=x+i+1;
		int q=p-y-i;

		if(q <= n){
			ans+=(n-q+1);
		}
	}

	cout << ans << endl;

}