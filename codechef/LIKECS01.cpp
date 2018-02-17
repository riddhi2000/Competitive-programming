#include<bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin >> t;

	while(t--){
		string s;
		cin >> s;
		vector<int> v(26,0);
		int f=0;
		for(int i=0;i<s.length();i++){
			if(v[s[i]-'a'] > 0){
				f=1;
				break;
			}
			v[s[i]-'a']++;
		}
		if(f == 0)
			cout << "no" << endl;
		else
			cout << "yes" << endl;
	}
}