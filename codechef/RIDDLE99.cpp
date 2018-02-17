#include <bits/stdc++.h>
using namespace std;

int main(){
	int t,a,b,m;
	cin >> t;

	while(t--){
		cin >> a >> b >> m;
		cout << b/m-(a-1)/m << endl;
	}
	
	return 0;
}

  