#include <bits/stdc++.h>
using namespace std;

int main(){
	string a,b,c;
	cin >> a >> b >> c;

	map<char,char> m;
	for(int i=0;i<26;i++)
		m[a[i]]=b[i];

	for(int i=0;i<c.length();i++){
		if(c[i] >= '0' && c[i] <= '9'){
			cout << c[i];
		}
		else if(c[i]>='a' && c[i] <= 'z'){
			cout << m[c[i]];
		}
		else{
			char t=char(tolower(c[i]));
			cout << char(toupper(m[t])) ;
		}
	}
	cout << endl;
	return 0;
}

  