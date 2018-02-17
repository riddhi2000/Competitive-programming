#include <bits/stdc++.h>
using namespace std;

int main(){
	int a,b;
	cin >> a >> b;

	int t=min(a,b);
	long long int ans=1;
	while(t){
		ans*=t;t--;
	}
	cout << ans << endl;
	return 0;
}

  