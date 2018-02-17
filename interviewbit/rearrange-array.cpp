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

void arrange(vector<int> &A) {
	int n=A.size();

	for (int i = 0; i < n; ++i){
		A[i] += (A[A[i]]%n)*n;
	}

	for (int i = 0; i < n; ++i)
	{
		A[i] /= n;
	}
    
}


int main(){

	vi A;
	A.pb(1);
	A.pb(0);

	arrange(A);
	
	return 0;
}