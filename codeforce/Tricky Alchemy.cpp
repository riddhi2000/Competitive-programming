#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define pb push_back
#define pp pop_back
#define mp make_pair
#define MOD 1e9+7

int main(){

	long long a,b,x,y,z;
	cin >> a >> b >> x >> y >> z;

	long long an=2*x,bn=3*z;
	
	an+=y;
	bn+=y;


	long long ans=0;	
	an-=a;
	bn-=b;
	if(an > 0)
		ans+=an;
	if(bn > 0)
		ans+=bn;

	cout << ans << endl;
}