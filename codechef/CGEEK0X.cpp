#include<bits/stdc++.h>
using namespace std;

int main(){
	int t,p,k,l;
	cin >> t;

	while(t--){
		cin >> p >> k >> l;

		vector<int> a(l);
		for(int i=0;i<l;i++)
			cin >> a[i];

		sort(a.begin(),a.end());
		int kp=1,c=0;
		long long ans=0;

		for(int i=l-1;i>=0;i--){
			c++;
			if(c > k){
				kp++;
				c=1;
			}
			//cout << a[i] << " " << kp << endl;
			ans += a[i]*kp;
		}
		cout << ans << endl;
	}
}