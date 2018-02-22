#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define pb push_back
#define pp pop_back
#define mp make_pair
#define MOD 1e9+7

int main(){
	int n;
	cin >> n;

	string s;
	cin >> s;

	if(n > 26){
		cout << "-1" << endl;
	}
	else{
		int ans=0;

		map<int,int> m;
		for(int i=0;i<n;i++){
			m[s[i]]++;
		}

		for(auto it=m.begin();it!=m.end();it++){
			ans += (it->second)-1;
		}

		cout << ans << endl;
	}	
}