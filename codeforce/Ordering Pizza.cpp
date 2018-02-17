#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define pb push_back
#define mp make_pair

int main(){
	int n,s;
	cin >> n >> s;

	vector<pair<ll, ll > > a,b;
	ll ta=0,tb=0,hap=0;
	ll x,p,q;

	for(int i=0;i<n;i++){
		cin >> x >> p >> q;

		if(p > q){
			a.pb(mp(p-q,x));
			hap+=p*x;
			ta+=x;
		}
		else{
			b.pb(mp(q-p,x));
			hap+=q*x;
			tb+=x;
		}
	}

	sort(a.begin(),a.end());
	sort(b.begin(),b.end());

	ll TA=ta,TB=tb;
	ta=ta%s;
	tb=tb%s;

	if(ta+tb>s){
		cout << hap << endl;
	}
	else{
		ll ans=hap;
		int x=0;

		while(ta!=0 && x<a.size()){
			int y=min(ta,a[x].second);
			hap-=y*a[x].first;
			ta-=y;
			x++;
		}
		swap(ans,hap);
		x=0;
		while(tb!=0 && x<b.size()){
			int y=min(tb,b[x].second);
			hap-=y*b[x].first;
			tb-=y;
			x++;
		}
		hap=max(hap,ans);
		cout << hap << endl;
	}
}