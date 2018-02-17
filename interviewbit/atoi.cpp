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


int atoi(const string &A) {
    int x=0;
    int sign=1;
    int i=0;
       
    while(i<A.length() && A[i] == ' '){
        i++;
    }

     if (A[i] == '-' || A[i] == '+') {
      sign = (A[i++] == '-') ? -1 : 1;
    }

    while(i<A.length() && A[i]>='0' && A[i]<='9'){        
	    if(x > INT_MAX/10 || (x == INT_MAX/10  && A[i]-'0'>7)){
	        if ( sign == 1)
	            return INT_MAX;
	        else
	            return INT_MIN;
	    }
	        x = x*10 + (A[i++] - '0');

    }

    return sign*x;
}



int main(){

	cout << INT_MAX << endl;

	cout << atoi("+7") << endl;
	cout << atoi("-88297 248252140B12 37239U4622733246I218 9 1303 44 A83793H3G2 1674443R591 4368 7 97") << endl;
	
	return 0;
}