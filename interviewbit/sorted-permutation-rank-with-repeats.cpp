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

int  fact(int n){
	int ans=1;

	while(n > 1){
		ans= (ans*n)%1000003;
		n--;
	}

	return ans;
}

int findRank(string A) {
	string s=A;
	int ans=0;

	sort(s.begin(),s.end());
	cout << s << endl;
	int n=A.length();

	for (int i = 0; i < A.length(); ++i){
		int index=s.find(A[i]);
		ans = (ans+index*fact(n--))%1000003;
		s.erase (remove(s.begin(), s.end(), A[i]), s.end());
		cout << s << endl;
	}

	return ans;
}


int main(){

	cout << findRank("aaab") << endl;
	
	return 0;
}