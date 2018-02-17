#include <bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin >> t;

	while(t--){
		int m;
		cin >> m;

		int x=0,y=0;
		while(m){
			if(m == 0) break;
			x++;m--;
			if(m == 0) break;
			y++;m--;
			if(m == 0) break;
			y++;m--;
		}
		cout << x << " " << y << endl;
	}
	return 0;
}