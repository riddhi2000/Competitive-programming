#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define pb push_back
#define pp pop_back
#define mp make_pair
#define MOD 1e9+7

int main(){
	string s;
	cin >> s;

	string t="abcdefghijklmnopqrstuvwxyz";

	bool f=true;

	string ans="";

	if(s.length() < t.length()){
		f=false;
	}
	else{

		int i=0,j=0;

		while(i<s.length() ){

			if(j<t.length() && s[i] <= t[j]){
				ans+=t[j];
				i++;j++;
			}
			else{
				ans+=s[i];
				i++;
			}
		}

		if(j != t.length()){
			f=false;
		}

	}

	if(f){
		cout << ans << endl;
	}	
	else{
		cout << "-1" << endl;
	}	
}