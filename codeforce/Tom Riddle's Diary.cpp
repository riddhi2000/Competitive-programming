#include<bits/stdc++.h>
using namespace std;

int main(){
	int n;
	cin >> n;
	string s;
	map<string,bool> m;
	while(n--){
		cin >> s;
		

		if(m.find(s) == m.end())
			cout << "NO" << endl;
		else
			cout << "YES" << endl;
		
		m[s]=true;
	}
}