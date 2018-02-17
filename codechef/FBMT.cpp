#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define pb push_back
#define pp pop_back
#define mp make_pair
#define MOD 1e9+7

int main(){
	int t,n;
	string s;

	cin >> t;

	while(t--){
		map<string,int> m;
		cin >> n;

		int f1=0,s1=0;
		string f="",ss="";

		while(n--){
			cin >> s;
			if(f == "" || s==f){
				f=s;f1++;
			}
			else{
				ss=s;s1++;
			}
		}

		if(f1 == s1){
			cout << "Draw" << endl;
		}
		else if(f1 > s1){
			cout << f << endl;
		}
		else{
			cout << ss << endl;
		}

	}

}