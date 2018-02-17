#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define pb push_back
#define pp pop_back
#define mp make_pair
#define MOD 1e9+7

int main(){
	int n,x;
	cin >> n;

	vector<int> v;
	map<int,int> m;

	for(int i=0;i<n;i++){
		cin >> x;
		m[x]=i;
		v.push_back(x);
	}

	int i=0;
	for(i=0;i<n;i++){
		if(m[v[i]] == i){
			break;
		}
	}

	cout << v[i] << endl;

}