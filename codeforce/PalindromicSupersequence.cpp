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

	int i=0,j=s.length()-1;

	string ans="";

	while(i<=j){
		if(s[i] == s[j]){
			ans+=s[i];i++;j--;
		}
		else{
			ans+=s[i];i++;
		}
	}

	cout << ans ;
	reverse(ans.begin(),ans.end()) ;
	cout << ans << endl;

}