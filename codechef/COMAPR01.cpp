#include<bits/stdc++.h>
using namespace std;

int main(){
	int t,n;
	cin >> t;

	while(t--){
		cin >> n;

		int x=1,ans=0;
		while(n > 0){

			ans++;
			n-=x;
			x+=x;
		}

		cout << ans << endl;
	}
}