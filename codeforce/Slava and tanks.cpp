#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define pb push_back
#define pp pop_back
#define mp make_pair
#define MOD 1e9+7

int main(){
	int n;
	cin >> n;

	if(n == 2)
		cout << 3 << endl;
	else
		cout << 2+2*(n-2) << endl;

	for(int i=2;i<=n;i++){
		cout << i << " ";
		cout << i-1 << " ";
	}
	if(n == 2)
		cout << 2 ;

	cout << endl;
	
}