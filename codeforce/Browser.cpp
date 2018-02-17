#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define pb push_back
#define pp pop_back
#define mp make_pair
#define MOD 1e9+7

int main(){
	int n,p,l,r;
	cin >> n >> p >> l >> r;

	int ans=0;

	if(l>1 && r<n){
		ans+=min(abs(p-l),abs(p-r));
		ans+=2;
		ans+=abs(r-l);
	}
	else if(l > 1){
		ans+=abs(p-l);
		ans++;
		p=l;
	}
	else if(r < n){
		ans+=abs(r-p);
		ans++;
	}

	cout << ans << endl;
}