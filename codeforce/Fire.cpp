#include<bits/stdc++.h>
using namespace std;

int main(){
	int n;
	cin >> n;

	int t[n+1],d[n+1],p[n+1];
	for(int i=1;i<=n;i++){
		cin >> t[i] >> d[i] >> p[i];
	}

	int dp[n][2001];

	for(int i=0;i<=n;i++){
		
		for(int j=0;j<=2000;j++){
			if(j == 0 || i==0){
				dp[i][j]=0;
			}
			else if(j+t[i] <= d[i]){
				dp[i+1][j+t[i]]=max(dp[i+1][j+t[i]],dp[i][j]+p[i]);
			}
			else{
				dp[i+1][j]=max(dp[i+1][j],dp[i][j]);
			}
		}

	}
	cout << dp[n][20] << endl;
}