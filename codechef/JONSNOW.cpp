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

	int t;
	cin >> t;

	while(t--){
		int n,m,x;
		cin >> n >> m;
		int j=0,w=0;

		for(int i=0;i<n;i++){
			cin >> x;
			j+=x;
		}

		for(int i=0;i<m;i++){
			cin >> x;
			w+=x;
		}

		if(w > j)
			cout << "Death" << endl;
		else
			cout << "Snow" << endl;
	}
	
	return 0;
}