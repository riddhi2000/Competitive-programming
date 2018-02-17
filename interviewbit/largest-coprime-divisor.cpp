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

int isCoprime(int A,int B){
	if(A < B)
		swap(A,B);
	if(B==0)
		return A;
	else
		return isCoprime(B,A%B);

}

int cpFact(int A, int B) {

	int X=A;

	while(1){
		int t=__gcd(X,B);
		//cout << t << endl;
		if(t == 1)
			return X;
		else
			X/=t;
	}

}


int main(){

	cout << cpFact(30,12)  << endl;
	
	return 0;
}