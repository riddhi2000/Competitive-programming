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
	int t,n,m,u,v;
	cin >> t;

	while(t--){
		cin >> n >> m;
		while(m--){
			cin >> u >> v;
			n -= 2;
		}

		if(n %2 == 0)
			cout << "yes" << endl;
		else
			cout << "no" << endl;
	}
	
	return 0;
}