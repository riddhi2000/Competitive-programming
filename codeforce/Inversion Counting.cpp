#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define pb push_back
#define pp pop_back
#define mp make_pair
#define MOD 1e9+7

int main(){
	int n,m,l,r;
	cin >> n;

	vector<int> v(n);
	int inv=0;

	for(int i=0;i<n;i++){
		cin >> v[i];
		for(int j=i-1;j>=0;j--){
			if(v[j] > v[i]){
				inv^=1;
			}
		}
	}

	cin >> m;

	while(m--){
		cin >> l >> r;
		int t=(r-l)+1;

		inv^=(t*(t-1)/2) & 1;

		if(inv%2 == 0){
			cout << "even" << endl;
		}
		else{
			cout << "odd" << endl;
		}
	}	
}