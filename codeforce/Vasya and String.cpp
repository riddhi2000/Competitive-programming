#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define pb push_back
#define pp pop_back
#define mp make_pair
#define MOD 1e9+7



int main(){
	int n,k;
	cin >> n >> k;

	string s;
	cin >> s;

	int a=0,b=0,ca=0,cb=0;

	for(int i=0;i<n;i++){
		if(s[i] == 'a'){
			ca++;
		}
		else{
			cb++;
		}
		if(i>0 && s[i]!=s[i-1]){
			if(s[i-1] == 'a'){
				ca=0;
			}
			else{
				cb=0;
			}
		}
		a=max(a,ca);
		b=max(b,cb);
	}

	int ans=max(a+k,b+k);
	if(ans > n){
		ans=n;
	}

	cout << ans << endl;
}