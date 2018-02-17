#include <bits/stdc++.h>

using namespace std;

int main(){

	string s="0";

	while(s.length() <= 1000){

		int l=s.length();
		for(int i=0;i<l;i++){
			if(s[i] == '0')
				s += '1';
			else
				s += '0';
		}
		//cout << s << endl << endl;
		
	}
	//cout << s.length() << endl;

	int x,q;
	cin >> x;

	while(x--){
		cin >> q;
		cout << s[q] << endl;
	}
	
	return 0;
}