#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define pb push_back
#define pp pop_back
#define mp make_pair
#define MOD 1e9+7

int main(){
	int n;
	cin >> n;

	vector<int> v(n);
	
	for(int i=0;i<n;i++){
		cin >> v[i];
	}

	int ans=1;
	int x=n-1-v[n-1];

	for(int i=n-2;i>=0;i--){
		if(i<x){
			ans++;
		}
		x=min(x,i-v[i]);
	}

	cout << ans << endl;

}