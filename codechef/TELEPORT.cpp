
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
	int q,r;
	cin >> q >> r;

	int x,y,i,j;
	char ch;

	vii teleport;

	while(q--){
		cin >> ch;
		cin >> x >> y;
		
		if(ch == '+'){
			cin >> x >> y;
			teleport.pb(mp(x,y));

		}
		else if(ch == '?'){
			cin >> i >> j;


		}
	}
	
	return 0;
}