#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define pb push_back
#define pp pop_back
#define mp make_pair
#define MOD 1e9+7

int main(){
	int n,k;
	cin >> n >> k;

	vector<int> v(n);
	for(int i=0;i<n;i++){
		cin >> v[i];
	}
	int ans=INT_MAX;
	for(int i=n-1;i>=0;i--){
		if(k%v[i] == 0){
			ans=min(ans,k/v[i]);
		}
	}	
	cout << ans << endl;
}