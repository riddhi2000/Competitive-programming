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

	vector<int> v(n+1);
	for(int i=1;i<=n;i++){
		cin >> v[i];
	}

	bool f=false;

	for(int a=1;a<=n;a++){
		int b=v[a];
		int c=v[b];
		int d=v[c];

		if(a == d){
			//cout << a << endl;
			f=true;break;
		}
	}

	if(f)
		cout << "YES" << endl;
	else
		cout << "NO" << endl;
}