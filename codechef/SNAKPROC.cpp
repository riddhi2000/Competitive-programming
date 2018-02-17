#include <bits/stdc++.h>

using namespace std;

int main(){

	int r,l;
	cin >> r;
	string s;
	int count=0;

	while(r--){
		cin >> l;
		cin >> s;
		count=0;

		for (int i = 0; i < l; ++i){
			if(s[i] == 'H')
				count++;
			else if(s[i] == 'T')
				count--;

			if(count<0 || count>1){
				break;
			}
		
		}
		if(count==0)
			cout << "Valid" << endl;
		else
			cout << "Invalid" << endl;

	}
	
	return 0;
}