#include <bits/stdc++.h>

using namespace std;

int main(){
	int t,u,v;
	cin >> t;
	long long int x,ans=0;

	while(t--){
		ans=0;
		cin >> u >> v;

		x=u+v;
		ans=(x*(x+1))/2; 

		ans=ans+u+1;

		cout << ans << endl;

	}
	return 0;
}
