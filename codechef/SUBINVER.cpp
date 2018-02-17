
#include <bits/stdc++.h>

using namespace std;

//for vectors
#define pb push_back
#define mp make_pair

typedef vector<int> vi; 
typedef pair<int,int> ii;
typedef vector<ii> vii;
typedef vector<vi> vvi;

//data types
typedef long long ll;

//loops
#define REP(i,a,b) \
    for(int i = int(a);i <= int(b);i++)
#define TRvi(c,it) \
    for(vi::iterator it=(c).begin();it!=(c).end();it++)

int main(){
	int n,u,l,r;
	cin >> n >> u;

	string s="";

	REP(i,0,n-1)
		s += "0";

	string ans=s;

	while(u--){
		cin >>l >> r;

		REP(i,l-1,r-1){
			if(s[i]=='0')
				s[i]='1';
			else
				s[i]='0';
		}

		if(s.compare(ans) > 0)
			ans=s;
		//cout << ans << endl;
	}
	
	cout << ans << endl;
	return 0;
}