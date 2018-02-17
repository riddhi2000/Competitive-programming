#include <bits/stdc++.h>
using namespace std;
typedef long long int lli;

int main(){
	lli t,n,ans,b,i;
	cin >> t;

	while(t--){
		ans=0;
		cin >> n >> b;
		
		for(i=(n-b)/2;i<=(n-b)/2+b && i<=(n-b);i++){
			lli x=((n-i)/b);
			ans=max(ans,x*i);
		}
		cout << ans << endl;		
	}
	return 0;
}

  