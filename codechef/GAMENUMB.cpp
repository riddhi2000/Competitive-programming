#include<bits/stdc++.h>
using namespace std;

#define ll long long

int main(){
	ll t,n,k,total;
	cin >> t;

	while(t--){
		cin >> n >> k;

		total=0;
		vector<ll> a(n),d(n),b(k);
		for(ll i=0;i<n;i++){
			cin >> a[i];
		}

		for(ll i=0;i<n;i++){
			cin >> d[i];total+=d[i];
		}

		for(ll i=0;i<k;i++){
			cin >> b[i];
		}

		vector<pair<ll,ll> > v;
		for(ll i=0;i<n;i++){
			v.push_back({a[i],d[i]});
		}

		sort(v.begin(),v.end());

		ll x=0,y=n-1;

		for(ll i=0;i<k;i++){
			//cout << "i: " <<  i << endl;
			if(i%2 == 0){
				ll xx=b[i];
				b[i]=total-b[i];
				total=xx;
				while(b[i] > 0){
					v[x].second-=b[i];
					if(v[x].second < 0){
						b[i]=-1*v[x].second;x++;
					}
					else{
						b[i]=0;
					}
				}
			}
			else{
				ll xx=b[i];
				b[i]=total-b[i];
				total=xx;
				//cout << b[i] << endl;
				while(b[i] > 0){
					v[y].second-=b[i];
					//cout << y << v[y].second << endl;
					if(v[y].second < 0){
						b[i]=-1*v[y].second;y--;
					}
					else{
						b[i]=0;
					}
				}
			}
		}

		//cout << x << " " << y << endl;
		ll ans=0;
		for(ll i=x;i<=y;i++){
			ans+=v[i].first*v[i].second;
		}


		cout << ans << endl;

	}
}