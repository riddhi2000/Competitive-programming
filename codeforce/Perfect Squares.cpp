#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define pb push_back
#define pp pop_back
#define mp make_pair
#define MOD 1e9+7

int main(){
	int n,ans;
	cin >> n;

	ans=INT_MIN;
	vector<int> v(n);
	for(int i=0;i<n;i++){
		cin >> v[i];

		int x=sqrt(v[i]);
		if(x*x != v[i]){
			ans=max(ans,v[i]);
		}
	}

	cout << ans << endl;
}