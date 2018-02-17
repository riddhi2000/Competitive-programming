#include <bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin >> t;

	while(t--){
		int n,ans=-1;
		cin >> n;
		vector<long long> a(n);
		vector<long long> b(n,0);

		for(int i=0;i<n;i++){
			cin >> a[i];
			b[i]=a[i];
			if(i > 0)
				b[i]+=b[i-1];

		}
		int temp=0;
		for(int i=n-1;i>=0;i--){
			temp += a[i];
			if(temp == b[i])
				ans=i;
		}
		cout << ans << endl;

	}
	
	return 0;
}
