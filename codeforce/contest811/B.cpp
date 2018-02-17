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
	int n,m;
	cin >> n >> m;

	vi a(n);
	REP(i,0,n-1)
		cin >> a[i];

	int l,r,x;
	

	while(m--){
		cin >> l >> r >> x;
		int prev=a[x-1];
		vi b=a;
		sort(b.begin()+l-1,b.begin()+r);

		// REP(j,0,n-1)
		// 	cout << b[j] << " ";
		// cout << endl;

		//cout << b[x-1] << " " << prev << endl;
		if(b[x-1] == prev)
			cout << "Yes" << endl;
		else
			cout << "No" << endl;

	}
	
	return 0;
}