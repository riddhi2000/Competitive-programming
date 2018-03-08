#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define pb push_back
#define pp pop_back
#define mp make_pair
#define MOD 1e9+7

int main(){
	ll n,m;
	cin >> n >> m;

	ll a=n,b=m;

	while(true){

		if(a==0 || b==0){
			break;
		}
		else if(a >= 2*b){
			ll t=a/(2*b);
			a-=2*b*t;
		}
		else if(b >= 2*a){
			ll t=b/(2*a);
			b-=2*a*t;
		}
		else{
			break;
		}

	}


	cout << a << " " << b << endl;

}