#include<bits/stdc++.h>
using namespace std;

#define ll long long

int main(){
	int t,n,x,q;
	cin >> t;

	while(t--){
		cin >> n >> q;

		vector<int> v(n);
		long long ans=1;

		bool f=1;
		for(int i=0;i<n;i++){
			cin >> v[i];
			if(f)
			ans*=v[i];
			if(ans > 1e9)
				f=0;
		}

		for(int i=0;i<q;i++){
			cin >> x;

			if(f == 0)
				cout << "0" << " ";
			else
				cout << (x)/ans << " ";
		
		}
		cout << endl;
	}
}