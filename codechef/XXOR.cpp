#include<bits/stdc++.h>
using namespace std;

#define ll long long

int main(){
	int q,n,l,r;
	cin >> n >> q ;

	vector<ll> v(n);
	for(int i=0;i<n;i++){
		cin >> v[i];
	}

	vector<vector<int> > vv(n,vector<int>(31,0));

	for(int i=0;i<n;i++){

		if(i > 0){
			vv[i]=vv[i-1];
		}

		for(int j=0;j<31;j++){
			if(v[i] & (1 << j)){
				vv[i][j]++;
			}
		}

	}


	while(q--){

		cin >> l >> r;
		l--;r--;

		//cout << l << " " << r << endl;

		int t=r-l+1;
		ll ans=0;

		for(int i=0;i<31;i++){
			
			int x=vv[r][i];
			if(l > 0){
				x-=vv[l-1][i];
			}

			//cout << i  << " " << x << endl;

			if(x < t-x){
				ans |= (1 << i);
				//cout << i << " " << ans << endl;
			}

		}

		cout << ans << endl;
	}
}