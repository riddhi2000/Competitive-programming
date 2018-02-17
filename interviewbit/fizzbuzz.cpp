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

vector<string> fizzBuzz(int A) {

	vector<string> x;
	for(int i=1;i<=A;i++){
		if(i%3==0){
			if(i%5 == 0){
				x.pb("Fizz");
			}
			else
				x.pb("FizzBuzz");
		}
		else if(i%5 == 0)
			x.pb("Buzz");
		else
			x.pb(to_string(i));
	}
	return x;
}


int main(){

	vector<string> A=fizzBuzz(5);

	REP(i,0,A.size()-1)
		cout << A[i] << endl;
	
	return 0;
}