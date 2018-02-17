#include<bits/stdc++.h>
using namespace std;

int main(){
	int t,n;
	cin >> t;

	while(t--){
		cin >> n;
		vector<int> v;

		for(int i=1;i<=n;i++){
			v.push_back(i);
			if(i%2 == 0)
				swap(v[i-1],v[i-2]);
		}
		if(n%2 != 0){
			swap(v[n-1],v[n-2]);
		}

		for(int i=0;i<n;i++){
			cout << v[i] << " ";
		}
		cout << endl;
	}
}