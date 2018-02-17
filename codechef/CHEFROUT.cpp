#include <bits/stdc++.h>

using namespace std;

int main(){
	int n;
	cin >> n;

	string s;
	bool f;

	char prev='\0';
	
	for(int i=0;i<n;i++){
		cin >> s;
		f=true;
		prev='\0';

		for(int j=0;j<s.length();j++){
			if(s[j] == 'C' && (prev == 'E' || prev=='S')){
				f=false;
				break;
			}
			else if(s[j] == 'E' && prev == 'S' ){
				f=false;
				break;
			}

			prev=s[j];
		}

		if(f == false)
			cout << "no" << endl;
		else
			cout << "yes"  << endl;

	}

	return 0;
}