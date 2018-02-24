#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define pb push_back
#define pp pop_back
#define mp make_pair
#define MOD 1e9+7

int main(){
	string s;
	cin >> s;

	map<char,int> m;
	int cur=0;

	for(char ch='0'; ch <='9'; ch++){
		m[ch]=cur++;
	}

	for(char ch='A'; ch <='Z'; ch++){
		m[ch]=cur++;
	}

	for(char ch='a'; ch <='z'; ch++){
		m[ch]=cur++;
	}
	m['-']=cur++;
	m['_']=cur++;


	for(int i=0;i<s.length();i++){
		for(int j=0;j<63;j++){
			
		}
	}

}