#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define pb push_back
#define pp pop_back
#define mp make_pair
#define MOD 1e9+7

int main(){
	double a,b,n,x,y,v;
	cin >> a >> b >> n;

	double ans=INT_MAX;

	for(int i=0;i<n;i++){
		cin >> x >> y >> v;

		x-=a;y-=b;
		double d=sqrt(x*x+y*y);

		ans=min(ans,d/v);

	}

	cout << fixed << setprecision(14) << ans << endl;
}