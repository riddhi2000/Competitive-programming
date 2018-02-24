#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define pb push_back
#define pp pop_back
#define mp make_pair
#define MOD 1e9+7

int main(){
	int n,d;
	cin >> n >> d;

	vector<int> v(n);
	for(int i=0;i<n;i++){
		cin >> v[i];
	}

	sort(v.begin(),v.end());

	int ans=INT_MAX;


	for(int i=0;i<n;i++){
		int no=v[i];
		no+=d+1;
		int j=lower_bound(v.begin(),v.end(),no)-v.begin();

		//cout << i << " " << j  << "  " << n << " " << n-j+i << endl;

		ans=min(ans,n-j+i);
	}

	cout << ans << endl;
}