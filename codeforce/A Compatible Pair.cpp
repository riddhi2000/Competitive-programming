#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define pb push_back
#define pp pop_back
#define mp make_pair
#define MOD 1e9+7

int main(){
	int n,m;
	cin >> n >> m;

	vector<int> a(n);
	for(int i=0;i<n;i++){
		cin >> a[i];
	}

	vector<int> b(m);
	for(int i=0;i<m;i++){
		cin >> b[i];
	}

	vector<int> v(m*n);
	int k=0;
	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++){
			v[k++]=a[i]*b[j];
		}
	}

	sort(v.rbegin(),v.rend());

	cout << v[1] << endl;


}