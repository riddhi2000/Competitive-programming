#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define pb push_back
#define pp pop_back
#define mp make_pair
#define MOD 1e9+7
const ll INF=LLONG_MAX;

int main(){
	int n,m;
	cin >> n >> m;

	vector<ll> a(n);
	for(int i=0;i<n;i++){
		cin >> a[i];
	}

	vector<ll> b(m);
	for(int i=0;i<m;i++){
		cin >> b[i];
	}

	sort(a.begin(),a.end());
	sort(b.begin(),b.end());

	if(max(a[0]*b[0],a[0]*b[m-1])  > max(a[n-1]*b[0],b[m-1]*a[n-1])){
		a.erase(a.begin());
	}
	else{
		a.pop_back();
	}

	n--;
	vector<ll> v(m*n);
	int k=0;
	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++){
			//cout << a[i] << " " << b[j] << endl;
			v[k++]=a[i]*b[j];
		}
	}
	sort(v.rbegin(),v.rend());
	cout << v[0] << endl;

}