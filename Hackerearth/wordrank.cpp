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

void permute(string str){
   
}

int main(){

	int t,n;
	cin >> t;

	string s;

	while(t--){
		cin >> s ;
		cin >> n;
		sort(s.begin(), s.end());
    	do {
    		n--;
    		if(n == 0){
    			cout << s << endl;
    			break;
    		}
       		
    	} while (next_permutation(s.begin(), s.end()));
	}
	
	return 0;
}