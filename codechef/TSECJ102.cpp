#include <bits/stdc++.h>

using namespace std;


int main(){
	int t,n;
	cin >> t;

	while(t--){
		cin >> n;
		if(n==1 || n%2 == 0)
			cout << "Y" << endl;
		else
			cout << "N" << endl;
	}	
	return 0;
}