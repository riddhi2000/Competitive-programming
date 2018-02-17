#include<bits/stdc++.h>
using namespace std;

int main(){
	long long n,p,q,r;
	cin >> n >> p >> q >> r;
	
	vector<long long> a(n);


	for(long long i=0;i<n;i++){
		cin >> a[i];
	}
	sort(a.begin(),a.end());

	long long ans=0;

	if(p>0){
		ans=ans+(p*a[n-1]);
	}
	else{
		ans+=p*a[0];
	}

	if(q>0){
		ans+=q*a[n-1];
	}
	else
		ans+=q*a[0];

	if(r>0){
		ans+=r*a[n-1];
	}
	else
		ans+=r*a[0];

	cout << ans << endl;

}