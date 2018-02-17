#include <bits/stdc++.h>
using namespace std;

int main(){
	long long int n,k,i;
	cin >> n >> k;

	long long int pnw=n/2;

	for(i=n/2;i>0;i--){
		if(i%(k+1) == 0)
			break;
	}

	long long int nd=i/(k+1);
	long long int nc=nd*k;

	if(i == 0)
		cout << "0" << " 0 " << n << endl;
	else
		cout << nd << " " << nc << " " << n-i << endl;

	return 0;
}

  