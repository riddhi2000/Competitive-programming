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

	vector<int> v(n);
	for(int i=0;i<n;i++){
		cin >> v[i];
	}

	int ans=INT_MAX;

	for(int i=1;i<n;i++){
		int j=i-1;

		if(s[j]=='R' && s[i]=='L'){
			ans=min(ans,abs(v[i]-v[j])/2);
		}
	}	

	if(ans == INT_MAX){
		cout << "-1" << endl;
	}
	else
		cout << ans << endl;
}