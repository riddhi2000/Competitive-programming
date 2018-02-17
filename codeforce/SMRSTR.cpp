#include<bits/stdc++.h>
using namespace std;

int main(){
	int t,n,x;
	cin >> t;

	while(t--){
		cin >> n >> q;

		vector<int> v(n);
		for(int i=0;i<n;i++)
			cin >> v[i];

		for(int i=0;i<q;i++){
			cin >> x;
			for(int j=0;j<n;j++){
				x=x/v[i];
			}
			cout << x << " ";
		}
		cout << endl;
	}
}