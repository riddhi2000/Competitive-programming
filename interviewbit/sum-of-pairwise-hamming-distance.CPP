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


int hammingDistance(const vector<int> &A) {
    int ans=0;
    
    for(int i=0;i<A.size();i++){
        for(int j=0;j<A.size();j++){
        	
        	int x=A[i]^A[j];
            ans=(ans+__builtin_popcount (x))%1000000007;
        }
    }
    
    return ans;
}

int hammingDistance1(const vector<int> &A) {
    
    int ans = 0; 
    int n = A.size();
 
    for (int i = 0; i < 31; i++){
        int x=0,y=0;
        for (int j = 0; j < n; j++){
            if ( (A[j] & (1 << i)) )
                x++;
            else
                y++;
        }

        ans += ((2LL * x * y)% 1000000007) ;
        if(ans >= 1000000007) ans=ans-1000000007;
    }
 
    return ans;
}



int main(){

	vi A;
	A.pb(2);
	A.pb(4);
	A.pb(6);

	cout << hammingDistance1(A) << endl;

	return 0;
}