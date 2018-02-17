#include<bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin >> t;

	while(t--){
		string s;
		cin >> s;

		int r=0,l=0;
		if(s[0] == 'R')
			r++;
		else
			l++;
		
		for(int i=1;i<s.length();i++){
			if(s[i]=='L' && s[i-1]=='R')
				l++;
			else if(s[i]=='R' && s[i-1]=='L')
				r++;
		}

		cout << min (r,l) << endl;
	}
}