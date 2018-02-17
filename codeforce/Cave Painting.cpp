#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define pb push_back
#define pp pop_back
#define mp make_pair
#define MOD 1e9+7

int main(){
	ll n,k;
	cin >> n >> k;

	if(n>1 && k >= n){
		cout << "No" << endl;
	}
	else{
		map<int,int> m;

		for(int i=1;i<=min(k,1000000LL);i++){
			if(m.find(n%i)==m.end()){
				m[n%i]=1;
			}
			else{
				cout << "No" << endl;
				return 0;
			}
		}
		cout << "Yes" << endl;
	}


}