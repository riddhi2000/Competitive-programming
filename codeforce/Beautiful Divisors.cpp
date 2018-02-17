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

	for(int k=9;k>=1;k--){
		string s="";
		for(int j=0;j<k;j++)
			s+='1';
		for(int j=0;j<k-1;j++)
			s+='0';
		int i = stoi(s, nullptr, 2);

		if(n%i == 0){
			cout << i << endl;
			break;
		}
	}	
}