#include<bits/stdc++.h>
using namespace std;

int main(){
	int t,n;
	
	cin >> n;
	string s;
	cin >> s;

	int c=0,o=0,d=0,e=0,h=0,f=0;

	for(int i=0;i<n;i++){
		if(s[i] == 'c')
			c++;
		else if(s[i] == 'o')
			o++;
		else if(s[i] == 'd')
			d++;
		else if(s[i] == 'e')
			e++;
		else if(s[i] == 'h')
			h++;
		else if(s[i] == 'f')
			f++;
	}

	cout << min(f,min(h,min(d,min(o,min(c/2,e/2))))) << endl;
}