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
    for(int i = int(a);i < int(b);i++)
#define TRvi(c,it) \
    for(vi::iterator it=(c).begin();it!=(c).end();it++)

int main(){
	int t,n,u,v;
	cin >> t;

	while(t--){
		cin >> n;
		int p[n];
		int c[n];

		REP(i,0,n){
			cin >> u >> v;
		}
		REP(i,0,n){
			cin >> p[i];
		}
		REP(i,0,n){
			cin >> c[i];
		}
	}
	
	return 0;
}