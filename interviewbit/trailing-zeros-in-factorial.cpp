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

int trailingZeroes(int A) {
    int c=0;
    
    for(int i=5;A/i>=1;i *= 5)
    	c += A/i;

    return c;
}


int main(){

	int n;
	cin >> n;

	cout << trailingZeroes(n) << endl;
	
	return 0;
}