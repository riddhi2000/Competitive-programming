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

int main(){
	int t,a,b,n,count;
	cin >> t;

	while(t--){
		cin >> a >> b >> n;

		bool friends[n];
		for (int i = 0; i < n; ++i){
			friends[i]=false;
		}
		count =1;
		friends[a]=true;

		for(int i=(a+b)%n;i!=a;i=(i+b)%n){
			if(friends[i] == false){
				friends[i]=true;
				count++;
			}
		}
		cout << count << endl;

	}
	
	return 0;
}