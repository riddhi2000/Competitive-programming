#include<bits/stdc++.h>
using namespace std;

int main(){
	int t,n;
	cin >> t;

	while(t--){
		string s;
		cin >> s;
		int a=0,b=0,c=0;
		char p='.';

		for(int i=0;i<s.length();i++){
			if(s[i]=='A'){
				a++;
				if(p == 'A'){
					a+=c;
				}
				p='A';c=0;
			}
			else if(s[i] == 'B'){
				b++;
				if(p == 'B'){
					b+=c;
				}
				p='B';c=0;
			}
			else{
				c++;
			}

		}

		cout << a << " "  << b <<endl;
			
	}
}