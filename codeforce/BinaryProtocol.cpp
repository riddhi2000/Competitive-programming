#include <bits/stdc++.h>
using namespace std;

int main(){
	int n;
	cin >> n;

	string s;
	cin >> s;
	int ans=0,t=0;

	for(int i=0;i<n;i++){
		if(s[i] == '0'){
			ans*=10;
			ans+=t;t=0;
		}
		else{
			t++;
		}
	}
	ans*=10;
	ans+=t;
	
	cout << ans << endl;

	return 0;
}

  