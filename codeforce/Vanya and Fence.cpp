#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define pb push_back
#define pp pop_back
#define mp make_pair
#define MOD 1e9+7

int main(){
	int n,h;
	cin >> n >> h;

	ll ans=0;

	vector<int> a(n);
	for(int i=0;i<n;i++){
		cin >> a[i];

		if(a[i] > h){
			ans+=2;
		}
		else{
			ans++;
		}
	}

	cout << ans << endl;

}