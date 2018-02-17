#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define pb push_back
#define pp pop_back
#define mp make_pair
#define MOD 1e9+7

bool isVowel(char x){
	if(x=='a' || x=='e' || x=='i' || x=='o' || x=='u' || x=='y')
		return true;
	return false;
}

int main(){
	int n;
	cin >> n;

	string s;
	cin >> s;

	string ans="";

	for(int i=0;i<s.length();i++){

		if(ans.length()>0 && isVowel(s[i])){

			if(!(isVowel(ans[ans.length()-1])))
				ans+=s[i];

		}
		else{
			ans+=s[i];
		}

	}

	cout << ans << endl;	
}