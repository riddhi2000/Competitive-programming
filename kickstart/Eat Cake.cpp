#include <bits/stdc++.h>
using namespace std;

int main(){
	int t,n;
	cin >> t;

	for(int k=1;k<=t;k++){
		cin  >> n;

	int *dp = new int[n+1];
 
    dp[0] = 0;
    dp[1] = 1;
    dp[2] = 2;
    dp[3] = 3;
 

    for (int i = 4; i <= n; i++){
        dp[i] = i;
        for (int x = 1; x <= i; x++) {
            int temp = x*x;
            if (temp > i)
                break;
            else dp[i] = min(dp[i], 1+dp[i-temp]);
        }
    }
 
    int res = dp[n];
    delete [] dp;
 
  
	cout << "Case #" << k << ": " << res << endl;

	}
}