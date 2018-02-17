#include <bits/stdc++.h>

using namespace std;

int main(){
	int t,n;
	cin >> t;

	while(t--){
		cin >> n;
		vector<int> v;
		int x,y;

		for(int i=0;i<n;i++){
			
			cin >> x >> y;
			v.push_back(x+y);
		}

		sort(v.begin(),v.end());
		for(int i=0;i<n;i++)
			cout << v[i] << " ";
		cout << endl;

		cout << v[n-1]-v[0] << endl;
	}
	return 0;
}