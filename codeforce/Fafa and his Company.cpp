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

	int ans=0;

	for(int i=1;i<n;i++){
		int x=n-i;
		if(x%i == 0){
			ans++;
		}
	}

	cout << ans << endl;	
}