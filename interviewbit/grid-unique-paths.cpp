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

int uniquePaths(int A, int B) {
    
    if(A==1 || B==1)
        return 1;
 
    return (A-1)*(B-1)*2;
}

int main(){

	cout << uniquePaths(15,9) << endl;
	
	return 0;
}