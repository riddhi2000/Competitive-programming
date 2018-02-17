#include<bits/stdc++.h>
#define ll long long 

using namespace std;

bool isPrime(ll i){
	if(i == 2) return true;
	for(ll j=2;j<=sqrt(i);j++){
		if(i%j == 0)
			return false;
	}
	return true;
}

bool isPali(ll no){

	string s=to_string(no);
	int i=0,j=s.length()-1;
	while(i < j){
		if(s[i] != s[j]){
			return false;
		}
		i++;j--;
	}
	return true;
}

int main(){
	ll n;

	cin >> n;
	ll i=(n%2 == 0) ?n+1 : n;

	while(true){
		if(isPrime(i) && isPali(i)){
			break;
		}
		else{
			i+=2;
		}
	}
	cout << i << endl;

}