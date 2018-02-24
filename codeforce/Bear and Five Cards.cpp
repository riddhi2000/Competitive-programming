#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define pb push_back
#define pp pop_back
#define mp make_pair
#define MOD 1e9+7

int main(){
	vector<int> v(5);

	ll ans=0;

	for(int i=0;i<5;i++){
		cin >> v[i];
		ans+=v[i];
	}

	sort(v.begin(),v.end());

	ll cans=ans;
	ll total=ans;

	for(int i=4;i>=1;i--){
		if(v[i] == v[i-1]){
			cans-=2*v[i];
			if(i-2>=0 && v[i]==v[i-2]){
				cans-=v[i];
			}
			ans=min(ans,cans);
		}
		cans=total;
	}

	cout << ans << endl;

}