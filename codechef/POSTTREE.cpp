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
	int n;
	cin  >> n;

	vi parent(n+1);
	vi ans(n+1);



	parent[1]=0;


	REP(i,2,n){
		cin >> parent[i];
	}

	
	REP(i,1,n){
		cin >> ans[i];
	}

	
	REP(i,1,n){
			int prev=ans[i];
			int j=parent[i];
			int res=ans[i];

			while(j != 0){
				int cur=ans[j];
				prev=min(prev,cur);
				res += prev;
				
				j=parent[j];
			}

			cout << res << " ";

	}
	cout << endl;

	// REP(i,1,n)
	// 	cout << ans[i] <<" ";
	// cout << endl;


	// REP(i,1,n){
	// 	int j=i;
	// 	int path=0;

	// 	while(j>0){
	// 		//cout <<j << " " << ans[j] << endl;
	// 		path += ans[j];
	// 		j = parent[j];
	// 	}
	// 	cout << path << " " ;
	// }
	// cout << endl;
	
	return 0;
}