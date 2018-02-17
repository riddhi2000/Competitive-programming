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

	int a,b;
	cin >> a >> b;

	int x=1;

	while(1){
		if(a >= x){
			a-=x;
		}
		else{
			cout << "Vladik" << endl;
			break;
		}
		x++;
		if(b >= x){
			b-=x;
		}
		else{
			cout << "Valera" << endl;
			break;
		}
		x++;

	}
	
	return 0;
}