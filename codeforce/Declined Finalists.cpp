#include<bits/stdc++.h>
using namespace std;

int main(){
	int k,t;
	cin >> k;
	int ans=0;

	for(int i=0;i<k;i++){
		cin >> t;
		ans=max(ans,t-25);
	}

	cout << ans << endl;
}