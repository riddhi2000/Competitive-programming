#include <bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin >> t;
	string s;

	while(t--){
		cin >> s;
		int ans,temp;
		if(s[0] == '=')	temp=1;
		else temp=2;
		ans=temp;
		char prev=s[0];

		for(int i=1;i<s.length();i++){
			if(s[i]!='=' && s[i]==prev){
				temp++;
				prev=s[i];
			}
			else{
				if(s[i] != '='){
					temp=2;prev=s[i];
				}
			}
			ans=max(ans,temp);
		}
		cout << ans << endl;
	}
	return 0;
}

  