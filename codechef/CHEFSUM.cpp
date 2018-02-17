#include<bits/stdc++.h>
using namespace std;

int main(){
	int t,n;
	cin >> t;

	while(t--){
		cin >> n;
		vector<int> a(n);
		long long int t=0;
		for(int i=0;i<n;i++){
			cin >> a[i];
			t+=a[i];
		}

		long long int m=t+a[0],in=1;

		for(int i=1;i<n;i++){
			if(t+a[i] < m){
				m=t+a[i];
				in=i+1;
			}
		}

		cout << in << endl;
	}
}