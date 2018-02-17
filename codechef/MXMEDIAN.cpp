#include <bits/stdc++.h>

using namespace std;

int main(){

	int t;
	cin >> t;

	while(t--){
		int n;
		cin >> n;

		int x=2*n;

		int a[x];


		for(int i=0;i<x;i++){
			cin >> a[i];
		}

		sort(a,a+x);

		int ans=a[n+n/2];

		for(int i=x-2,j=0;j<n/2;i-=2,j+=2){
			swap(a[i],a[j]);
		}

		cout << ans << endl;

		for(int i=0;i<x;i++){
			cout << a[i] <<" ";
		}
		cout << endl;
	}

	return 0;
}