#include<bits/stdc++.h>
using namespace std;

int main(){
	long long int t,n;
	cin >> t;

	while(t--){
		string s;
		cin >> s;

		int no=0;
		no=no*10+(s[s.length()-3]-'0');
		no=no*10+(s[s.length()-2]-'0');
		no=no*10+(s[s.length()-1]-'0');



		if(no%8 == 0){
			cout << "YES" << endl;
		}
		else{
			cout << "NO" << endl;
		}
	}
}