#include <bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin >> t;
	while(t--){
		string s;
		cin >>s;
		int u=0;
		int d=0;

		for(int i=0;i<s.length();i++){
			if(i==0){
				if(s[i]=='U')
					u++;
				else
					d++;
			}
			else{
				if(s[i]=='U' && s[i-1]=='D'){
					u++;
				}
				else if(s[i]=='D' && s[i-1]=='U'){
					d++;
				}
			}
		}
		if(u<d)
			cout << u << endl;
		else
			cout << d << endl;
	}
	return 0;
}