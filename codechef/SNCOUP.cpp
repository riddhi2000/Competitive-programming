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
	int t,n;

	cin >> t;

	while(t--){
		string a,b;
		int flaga=0,flagb=0,ca=0,cb=0;
		int count=0;

		cin >> n;
		cin >> a >> b;

		for(int i=0;i<n;i++){
			if(a[i] == '*')
				ca=1;
			if(b[i] == '*')
				cb=1;

			if((flaga==1 && a[i]=='*')  || (flagb==1 && b[i]=='*')){
				if(a[i] == '*')
					flaga=1;
				else
					flaga=0;

				if(b[i] == '*')
					flagb=1;
				else
					flagb=0;


				count++;
				//cout << i << " " << count << endl;
			}

			if(flaga==0 && a[i]=='*')
				flaga=1;
			if(flagb==0 && b[i]=='*')
				flagb=1;

			
		}
		if(ca==1 && cb==1)
			count++;
		cout << count << endl;

	}
	
	return 0;
}