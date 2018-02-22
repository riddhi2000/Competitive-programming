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

	int p=0,q=0;

	vector<int> v(n);
	for(int i=0;i<n;i++){
		cin >> x;

		if(x == 1){
			p=i;
		}
		if(x == n){
			q=i;
		}

	}

	p=max(p,n-1-p);
	q=max(q,n-1-q);

	cout << max(p,q) << endl;	
}