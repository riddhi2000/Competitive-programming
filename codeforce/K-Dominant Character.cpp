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

	int c=0;

	int n=s.length();

	for(int i=1;i<=n;i++){
		map<char,int> m;
		
		int count=0;

		for(int j=0;j<i;j++){
			if(m.find(s[j]) == m.end()){
				count++;
				m[s[j]]=1;
			}
			else
				m[s[j]]++;
		}

		

		for(int j=0;j+i<n;j++){

			if(m.find(s[i+j]) != m.end()){
				m[s[i+j]]++;
			}
			if(m.find(s[j]) != m.end()){
				m[s[j]]--;
			}

			if(m.find(s[j])!=m.end() && m[s[j]] == 0){	
				m.erase(s[j]);
				count--;
			}
			if(count == 0){
				break;
			}
		}
		if(count > 0){
			c=i;break;
		}

	}

	cout << c << endl;	
}