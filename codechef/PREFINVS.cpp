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
	string s;
	cin >> s;
	int i;

	for (i = s.length()-1; i>=0 && s[i] == '0' ; i--);

	int ans=0;
	char prev='1';

	if(i>=0){
		ans++;
	}
	i--;

	while(i>=0){
		if(s[i] != prev){
			prev=s[i];
			ans++;
		}
		i--;
	}
	
	cout << ans << endl;
	
	return 0;
}