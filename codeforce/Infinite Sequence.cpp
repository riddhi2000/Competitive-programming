#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define pb push_back
#define pp pop_back
#define mp make_pair
#define MOD 1e9+7

int main(){
	ll a,b,c;

	cin >> a >> b >> c;



	if(b>a && c>0){
		int x=b-a;
		if(x%c == 0){
			a=b;
		}
	}
	else if(b<a && c<0){
		int y=a-b;
		if(y%c == 0){
			a=b;
		}
	}
	

	if(a == b){
		cout << "YES" << endl;
	}
	else{
		cout << "NO" << endl;
	}	
}