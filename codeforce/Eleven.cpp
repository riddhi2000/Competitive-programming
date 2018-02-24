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

	int f=1,s=1,i=1;

	while(i<=n){
		if(i == s){
			cout << 'O' ;
			int t=f+s;
			f=s;
			s=t;
		}
		else{
			cout << 'o';
		}
		i++;
	}

	cout  << endl;

}