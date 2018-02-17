#include <bits/stdc++.h>

using namespace std;

int main(){

	int n,k;
	cin >> n >> k;

	map<int,int> cities;
	int t,x,y;

	for (int i = 0; i < k; ++i){
		cin >> x;
		for (int j = 0; j < x; ++j){
			cin >> y;
			cities[y]=i;
		}
		
	}

	
	cin >> t;
	while(t--){
		cin >> x >> y;

		int ans=abs(cities[y]-cities[x]);
		ans=min(ans,k-ans);
		cout << ans << endl;	
		
	}
	
	return 0;
}