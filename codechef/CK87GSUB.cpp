#include<bits/stdc++.h>
using namespace std;

int main(){
	int t,n;
	cin >> t;
	string s;

	while(t--){
		cin >> s;
		int count=0;


		for(int i=0;i<s.length()-1;i++){
			if(s[i+1] == s[i]){
				count++;
			}

			
		}

		cout << count << endl;
	}
}