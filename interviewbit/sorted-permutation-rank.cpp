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


int fact(int n){
	int ans=1;
	while(n){
		ans= ( (ans*n)%1000003 );
		n--;
	}
	return ans;
}

int findRank(string A) {
	int ans =0 ;
	int n=A.length();
	string c=A;

	sort(c.begin(),c.end());
	//cout << c << endl;
	int x=n-1;

	for (int i = 0; i < n; ++i){
		size_t index=c.find( A[i]);
		ans =  (ans+(fact(x--)*(index))) % 1000003;
		//cout << ans << endl;

		c.erase(remove(c.begin(), c.end(), A[i]), c.end());
	}
	return (ans+1)%1000003;
}


int main(){
	cout << "final : " << findRank("cba") << endl;
	return 0;
}