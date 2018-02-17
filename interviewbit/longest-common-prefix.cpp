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


string longestCommonPrefix(vector<string> &A) {
    string ans="";
    if(A.size() == 0)
    	return ans;
    if(A.size() == 1)
    	return A[0];
    
    for(int i=0;i<A[0].size();i++){
        for(int j=1;i<A[j].length() && j<A.size();j++){
            if(A[j][i] != A[j-1][i]){
                return ans;
            }
        }
        ans += A[0][i];
    }
    
    return ans;
}

int main(){
	std::vector<string> v;
	v.pb("abcd");
	v.pb("abde");
	v.pb("abcf");

	cout << longestCommonPrefix(v) << endl;

	return 0;
}