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

	vector<int> v;
	char last;

	for(int i=0;i<s.length();){
		int nq=0;
		while(i<s.length() && s[i] != 'A'){
			if(s[i] == 'Q')
				nq++;
			i++;
		}
		if(nq > 0){
			v.push_back(nq);
			last='Q';
		}
		
		nq=0;
		while(i<s.length() && s[i] != 'Q'){
			if(s[i] == 'A')
				nq++;
			i++;
		}
		if(nq > 0){
			v.push_back(nq);
			last='A';
		}
	}

	if(last == 'A')
		v.pop_back();


	long long ans=0;
	long long tq=0;
	long long pa=0;

	if(v.size() > 0)
		tq+=v[v.size()-1];


	for(int i=v.size()-2;i>=0;i--){
		i--;
		if(i >= 0){
			pa+=v[i+1]*tq;
			ans+=v[i]*pa;
			tq+=v[i];
		}	
	}

	cout << ans << endl;
}