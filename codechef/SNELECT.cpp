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
    for(int i = int(a);i < int(b);i++)
#define TRvi(c,it) \
    for(vi::iterator it=(c).begin();it!=(c).end();it++)

int main(){
	int t;
	cin >> t;

	string s;

	while(t--){
		cin >> s;
		int sc=0;
		int mc=0;

		bool used[s.length()];

		REP(i,0,s.length())
			used[i]=0;


		for(int i=0;i<s.length();i++){
			if(s[i] == 's'){
				sc++;
				if(i-1 >= 0 && s[i-1]=='m' && used[i-1]==0){
					sc--;
					used[i]=used[i-1]=1;
				}
			}
			else if(s[i] == 'm'){
				mc++;
				if(i-1 >= 0 && s[i-1]=='s' && used[i-1]==0){
					sc--;
					used[i]=used[i-1]=1;
				}

			}
		}

		if(sc > mc)
			cout << "snakes" << endl;
		else if(sc < mc)
			cout << "mongooses" << endl;
		else
			cout << "tie" << endl;
	}
	
	return 0;
}