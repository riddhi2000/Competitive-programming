#include<bits/stdc++.h>
using namespace std;

int main(){
	int t,x;
	cin >> t;

	while(t--){
		int n,k;
		cin >> n >> k;

		int ans=-1,c=0;

		for(int i=0;i<k;i++){
			cin >> x;
			if(i == 0){
				ans=x;
			}
			else
				ans=max(ans,(x-c)/2+1);
			c=x;
		}
		ans=max(ans,n+1-x);

		cout << ans << endl;
	}
}