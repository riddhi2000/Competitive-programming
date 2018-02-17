#include<bits/stdc++.h>
using namespace std;

int main(){
	int n,k,t;
	cin >> n >> k >> t;
	if(t <= k)
		cout << t << endl;
	else if(t <= n)
		cout << k << endl;
	else{
		int x=k;
		for(int i=n+1;i<=t;i++){
			x--;
		}
		cout << x << endl;
	}
}