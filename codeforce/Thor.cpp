#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define pb push_back
#define pp pop_back
#define mp make_pair
#define MOD 1e9+7


int main(){
	int n,q,type,x;
	cin >> n >> q;

	vector<int> v(n+1,0);
	vector<int> r(n+1,0);
	vector<int> t;
	vector<int> ur(n+1,0);

	int c=0;

	int ans=0;

	while(q--){
		cin >> type >> x;

		if(type == 1){
			t.pb(x);
			ans++;
			r[x]++;
		}
		else if(type == 2){
			v[x]+=r[x];
			ans-=r[x];
			r[x]=0;
		}
		else{

			while(x > c){
				ur[t[c]]++;
				if(ur[t[c]] > v[t[c]]){
					int xx=ur[t[c]]-v[t[c]];
					v[t[c]]+=xx;
					r[t[c]]-=xx;
					ans-=xx;
				}
				c++;
			}
		}

		cout << ans << endl;
	}	
}