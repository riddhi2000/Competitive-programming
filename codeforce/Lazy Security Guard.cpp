#include<bits/stdc++.h>
using namespace std;

int main(){
	int t,n;
	cin >> n;

	long i=1;
	while(i*i <= n){
		i++;
	}
	i--;

	int ans=i*4;
	n-=i*i;

	while(n > 0){
		ans+=2;
		n-=i;
	}

	cout << ans << endl;
}
