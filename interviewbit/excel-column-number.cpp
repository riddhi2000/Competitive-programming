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

int titleToNumber(string A) {
    int n=A.length();
    int c=1;
    int ans=0;

   for(int i=0;i<n;i++){
   	//cout <<i << A[i] << endl;
   		int x=A[i]-'A'+1;
   		//cout << x << endl;
   		ans *= 26;
   		//cout << ans << endl;
   		ans += x ; 
   		//cout << ans << endl;
   		c*=26;
   } 
   return ans;
}

int main(){

	cout << titleToNumber("ZZ") << endl;
	
	return 0;
}