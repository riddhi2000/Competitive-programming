#include<bits/stdc++.h>
using namespace std;

const int m=1e9+7;

int main(){
	int n;
	cin >> n;

	long long x,ans=1;

	while(n--){
		cin >> x;
		ans=(ans*x)%m;
	}

	cout << ans << endl;
}