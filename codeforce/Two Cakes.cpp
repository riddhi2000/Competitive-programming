#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define pb push_back
#define pp pop_back
#define mp make_pair
#define MOD 1e9+7

int main(){
	int n,a,b,x,y;
	cin >> n >> a >> b;

	int ans=0;

	for(int i=1;i<n;i++){
		x=a/i;
		y=b/(n-i);

		//cout << i << " " << x << " " << y << endl;

		ans=max(ans,min(x,y));


		x=b/i;
		y=a/(n-i);

		ans=max(ans,min(x,y));

	}

	cout << ans << endl;	
}