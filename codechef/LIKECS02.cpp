#include<bits/stdc++.h>
using namespace std;

int main(){
	int t,n;
	cin >> t;

	while(t--){
		cin >> n;
		int k=n/2;
		for(int i=1;i<=n;i++){
			cout << k+i << " ";
		}
		cout << endl;
	}
}