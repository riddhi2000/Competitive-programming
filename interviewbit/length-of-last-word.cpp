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

int lengthOfLastWord(const string &A) {
  int n=A.length();
    
    if(n == 0)
        return 0;
        
    int i=0,j=0;
    
    while(i < n){
        while(i<n && A[i] == ' ')
            i++;
        if(i < n)
            j=0;
        while(i<n && A[i] != ' '){
            i++;j++;
        }
    }
    return j;
}

int lengthOfLastWord1(const string &s) {
            int len = 0;
      


            while (*s) {
                if (*s != ' ') {
                    len++;
                    s++;
                    continue;
                }
                s++;
                if (*s && *s != ' ') len = 0;
            }
            return len;

        }

int main(){

	//cout << lengthOfLastWord("Hello   ") << endl;
	cout << lengthOfLastWord1("Hello   ") << endl;
	
	return 0;
}