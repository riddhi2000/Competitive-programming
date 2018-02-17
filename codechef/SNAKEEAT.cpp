#include <bits/stdc++.h>

using namespace std;

int main(){

	int t,n,q,count;
	cin >> t;

	while(t--){
		cin >> n >> q;
		int l[n];
		for (int i = 0; i < n; ++i){
			cin >> l[i];
		}
		sort(l,l+n);
		while(q--){
			count=0;
			cin >> k;

			for(int i=n-1;i>=0;i--){
				if(l[i] >= k)
					count++;
				else
					break;
			}

			


			cout << count << endl;
		}
	}
	return 0;
}