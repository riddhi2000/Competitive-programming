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

	int t[n];
	for(int i=0;i<n;i++)
		cin >> t[i];


	map<int,int> m;
	m[0]=1;
	
	for(int i=0;i<n;i++){
		if(m.find(t[i]) != m.end() ){
			int x=m[i];
			m.erase(t[i]);
			m[i+1]=x;
		}
		else{
			m[i+1]=2;
		}
	}

	cout << m.size() << endl;
}