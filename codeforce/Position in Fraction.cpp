#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define pb push_back
#define pp pop_back
#define mp make_pair
#define MOD 1e9+7

int main(){
	double a,b,c,fr,in;
	cin >> a >> b >> c;

	double f=a/b;

	cout << f << endl;
	f = f-(long)f;
	cout << f << endl;


	string s=to_string(f);
	s=s.substr(2);

	cout << s << endl;
	int ans=-1;

	for(int i=0;i<s.length();i++){
		if(s[i] == c+'0'){
			ans=i+1;
			break;
		}
	}

	cout << ans << endl;

}