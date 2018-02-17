#include<bits/stdc++.h>
using namespace std;

int main(){
	int t,n,q,l,r;
	cin >> t;

	while(t--){
		cin >> n >> q;
		vector<int> v(n);

		for(int i=0;i<n;i++)
			cin >> v[i];

		for(int i=0;i<q;i++){
			cin >> t >> l >> r;
			l--;r--;
			if(t==1){
				int ans=0;
				for(int j=l+1;j<r;j++){
					ans=max(ans,(v[j]-v[l])*(v[r]-v[j]));
				}
				cout << ans << endl;
			}
			else{
				v[l]=r+1;
			}
		}
	}
}