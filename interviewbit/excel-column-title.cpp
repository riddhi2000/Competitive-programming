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

string convertToTitle(int A) {
	 string r = "";
	 int n=A;
        while (n > 0) {
            r = (char)(65 + (n - 1) % 26) + r;
            n = (n - 1) / 26;
        }
        return r;
}


int main(){
	int n;
	cin >> n;
	cout << convertToTitle(n) << endl;
	
	return 0;
}