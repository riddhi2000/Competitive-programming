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
					c=0;
				}
				p='A';
			}
			else if(s[i] == 'B'){
				b++;
				if(p == 'B'){
					b+=c;
					c=0;
				}
				p='B';
			}
			else{
				c++;
			}

		}

		cout << a << " " << cout << b <<endl;
			
	}
}