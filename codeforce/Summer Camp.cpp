#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define pb push_back
#define pp pop_back
#define mp make_pair
#define MOD 1e9+7

int main(){
	
	string s="";
	int i=1;
	while(i <= 900){
		s+=to_string(i);
		i++;
	}

	int n;
	cin >> n;

	cout << s[n-1] << endl;
}