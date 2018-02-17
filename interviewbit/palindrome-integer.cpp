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

bool isPalindrome(int A) {
	string s=to_string(A);

	for(int i=0,j=s.length()-1;i<j;i++,j--){
		if(s[i] != s[j])
			return false;
	}
    
    return true;
}


int main(){

	cout << isPalindrome(12121) << endl;
	
	return 0;
}