#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define pb push_back
#define pp pop_back
#define mp make_pair
#define MOD 1e9+7

int main(){
	double n,m,a,b;
	cin >> n >> m;

	double ans=INT_MAX;

	vector<pair<double,double> > v;
	for(int i=0;i<n;i++){
		cin >> a >> b;
		if(a/b < ans){
			ans=a/b;
		}
	}	

	cout << setprecision(8) << ans*m << endl;	
}