#include <bits/stdc++.h>
using namespace std;

int main(){
	double t,u,v,x;
	cin >> t;

	while(t--){
		cin >> u >> v >> x;
		cout << fixed <<  setprecision(10) << x/(u+v) << endl;
	}
	
	return 0;
}