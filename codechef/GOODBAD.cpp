#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define pb push_back
#define pp pop_back
#define mp make_pair
#define MOD 1e9+7

int main(){
	int t,n,k;
	cin >> t;

	while(t--){
		string s;
		cin >> n >> k;

		cin >> s;
		int l=0,u=0;

		for(int i=0;i<s.length();i++){
			if(s[i]>='A' && s[i]<='Z'){
				u++;
			}
			else{
				l++;
			}
		}

		if(u<=k && l<=k){
			cout << "both" << endl;
		}
		else if(u<=k){
			cout << "chef" << endl;
		}
		else if(l <= k){
			cout << "brother" << endl;
		}
		else{
			cout << "none" << endl;
		}
	}	
}