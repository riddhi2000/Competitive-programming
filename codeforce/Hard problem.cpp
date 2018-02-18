#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define pb push_back
#define pp pop_back
#define mp make_pair
#define MOD 1e9+7
#define INF 1LL << 60

int main(){
	int n;
	cin >> n;

	vector<ll> c(n);
	for(int i=0;i<n;i++){
		cin >> c[i];
	}

	vector<string> s(n),rs(n);
	for(int i=0;i<n;i++){
		cin >> s[i];
		rs[i]=s[i];
		reverse(rs[i].begin(),rs[i].end());
	}

	vector<vector<ll> > dp(n,vector<ll>(2,INF));
	dp[0][0]=0;
	dp[0][1]=c[0];

	for(int i=1;i<n;i++){
		if(s[i] >= s[i-1]){
			dp[i][0]=min(dp[i][0],dp[i-1][0]);
		}
		if(s[i] >= rs[i-1]){
			dp[i][0]=min(dp[i][0],dp[i-1][1]);
		}
		if(rs[i] >= s[i-1]){
			dp[i][1]=min(dp[i][1],dp[i-1][0]+c[i]);
		}
		if(rs[i] >= rs[i-1]){
			dp[i][1]=min(dp[i][1],dp[i-1][1]+c[i]);
		}
	}

	ll ans=min(dp[n-1][0], dp[n-1][1] );
	if(ans >= INF)
		cout << "-1" << endl;
	else
		cout << ans << endl;

}