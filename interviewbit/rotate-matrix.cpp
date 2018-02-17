#include <bits/stdc++.h>

using namespace std;

//for vectors
#define pb push_back
#define mp make_pair

typedef vector<int> vi; 
typedef pair<int,int> ii;
typedef vector<ii> vii;
typedef vector<vi> vvi

//data types
typedef long long ll;

//loops
#define REP(i,a,b) \
    for(int i = int(a);i < int(b);i++)
#define TRvi(c,it) \
    for(vi::iterator it=(c).begin();it!=(c).end();it++)


void Solution::rotate(vector<vector<int> > &A) {
	int x=A.size();

	REP(i,0,A.size()/2){

		REP(j,1,x){
			
			
		}

		x/=2;
	}

     
}


int main(){
	vvi A;
	vi x;
	x.pb(1);
	x.pb(2);
	A.pb(x);

	vi x;
	x.pb(3);
	x.pb(4);
	A.pb(x);

	rotate(A);

	REP(i,0,A.size()-1){
		REP(j,0,A[i].size()-1)
			cout<< A[i][j] << " ";
		cout << endl;
	}

	return 0;
}