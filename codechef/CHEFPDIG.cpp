#include<bits/stdc++.h>
using namespace std;

int main(){
	int t,n;
	cin >> t;

	while(t--){
		string s;
		cin >> s;

		vector<int> digit(10,0);
		
		for(int i=0;i<s.length();i++){
			digit[s[i]-'0']++;
		}

		string ans="";

		for(int i=65;i<=90;i++){

			if(i==66 || i==77 || i==88){
				if(digit[i%10] > 1)
					ans+=i;
			}
			else if(digit[i%10]>0 && digit[i/10]>0){
				ans+=i;
			}

		}
		cout << ans << endl;
	}
}