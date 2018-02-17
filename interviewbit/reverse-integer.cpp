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

int reverse(int A) {
   int rev=0,x=1;
   while(A){
   		int x=A%10; 
   		A /=10;
   		if((rev > INT_MAX/10) || (rev==INT_MAX/10 && x>INT_MAX%10))
   			return 0;
   		if((rev < INT_MIN/10) || (rev==INT_MIN/10 && x<INT_MIN%10))
   			return 0;
   		rev = rev*10+x;
   } 
   return rev;
}

int main(){

	cout << reverse(-1146467285) << endl;
	
	return 0;
}