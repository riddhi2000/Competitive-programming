#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define pb push_back
#define pp pop_back
#define mp make_pair
#define MOD 1e9+7

int main(){
	int n,k,x,t;
	cin >> n >> k >> x;

	int ans=0,c=0;
	int a[n];
	for(int i=0;i<n;i++){
		cin >> a[i];
		ans += a[i];
	}
	for(int i=n-1;i>=0 && c<k;i--){
		if(c<k && x<a[i]){
			ans=ans-a[i]+x;
			c++;
		}
	}
	cout << ans << endl;	
}