#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define pb push_back
#define pp pop_back
#define mp make_pair
#define MOD 1e9+7

int main(){
	int n,x;
	cin >> n;

	map<int,vector<int> > m;

	for(int i=0;i<n-1;i++){
		cin >> x;
		m[x].pb(i+2);
	}

	int ans=1;

	vector<int> v=m[1];

	while(v.size() > 0){
		int cans=0;

		//cout << "-----" << endl;

		vector<int> xx;

		for(auto i : v){
			//cout << i << endl;
			cans++;
			for(auto it : m[i]){
				
				xx.pb(it);
			}

		}
		v=xx;
		ans+=(cans%2);

	}

	cout << ans << endl;

}