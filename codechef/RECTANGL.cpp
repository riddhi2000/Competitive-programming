#include<bits/stdc++.h>
using namespace std;

int main(){
	int t,n;
	
	cin >> t;
	vector<int> v(4);

	while(t--){
		cin >> v[0] >> v[1] >> v[2] >> v[3];
		sort(v.begin(),v.end());

		if(v[0]==v[1] && v[2]==v[3]){
			cout << "YES" << endl;
		}
		else{
			cout << "NO" << endl;
		}

	}
}