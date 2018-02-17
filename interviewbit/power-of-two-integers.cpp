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

bool isPower(int A) {

	if(A == 1)
		return true;

	REP(i,2,sqrt(A)){
		int p=i;
		int count=0;
		
		while(p < A && p>0){
			
			p*=i;
			if(p == A){
				return true;
			}
			
		}
		
	}
	return false;	
}


int main(){

	cout << isPower(1024000000) << endl;
	
	return 0;
}