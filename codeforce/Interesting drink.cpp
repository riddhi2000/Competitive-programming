#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define pb push_back
#define pp pop_back
#define mp make_pair
#define MOD 1e9+7

int main(){
	int n,q,t;
	cin >> n;

	vector<int> x(100005,0);
	for(int i=0;i<n;i++){
		cin >> t;
		x[t]++;
	}

	for(int i=1;i<100005;i++){
		x[i]+=x[i-1];
	}

	cin >> q;

	for(int i=0;i<q;i++){
		cin >> t;

		//cout << upper_bound(x.begin(),x.end(),t)-x.begin() << endl;
		if(t >= 100000)
			cout << n << endl;
		else
			cout << x[t] << endl;
	}

	

}