#include <bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin >> t;
	string p,q;

	while(t--){
		cin >> p >> q;
		vector<int> x(26,-1);
		int i;
		for(i=0;i<p.length();i++){
			if(x[q[i]-'a']>=0 && x[q[i]-'a'] != p[i]-'a' )
				break;
			x[q[i]-'a']=p[i]-'a';
		}	
		if(i == p.length())
			cout << "YES" << endl;
		else
			cout << "NO" << endl;
	}
	return 0;
}