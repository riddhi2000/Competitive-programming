#include <bits/stdc++.h>

using namespace std;

int main(){
	int a,b,c,ans;
	cin >> a >> b >> c;

	int n,t;
	cin >> n;

	ans=0;

	for(int i=0;i<n;i++){
		cin >> t;
		if(t>b && t<c)
			ans++;	
	}

	cout << ans << endl;

	return 0;
}