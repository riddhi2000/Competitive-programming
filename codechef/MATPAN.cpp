#include<bits/stdc++.h>
using namespace std;

int main(){
	int t,n;
	cin >> t;

	while(t--){
		vector<int> v(26,0);
		vector<int> y(26,0);
		for(int i=0;i<26;i++)
			cin >> v[i];

		string s;
		cin >> s;
		for(int i=0;i<s.length();i++)
			y[s[i]-'a']++;

		long long int sum=0;
		for(int i=0;i<26;i++){
			if(y[i] == 0)
				sum += v[i];
		}

		cout << sum << endl;
	}
}