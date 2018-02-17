#include <bits/stdc++.h>
using namespace std;

long long int ans;

void pattern(int a[],int i,int n,vector<int> x){
	if(i == n){
		if(x.size() == 2){
			x[0]=(x[1]+x[0])%1000000007;
		}
		ans=(ans+x[0])%1000000007;
		return;
	}
	vector<int> y=x;
	if(x.size() == 2){
		x[0]=(x[0]+x[1])%1000000007;
		x.pop_back();
		x.push_back(a[i+1]);
	}
	else if(x.size() == 1)
		x.push_back(a[i+1]);
	else{
		x.push_back(a[i]);
		x.push_back(a[i+1]);
	}
		
	pattern(a,i+1,n,x);
	if(y.size() == 0)
		y.push_back((a[i]*a[i+1])%1000000007);
	else{
		int t=(y.back()*a[i+1])%1000000007;
		y.pop_back();
		y.push_back(t);
	}
	pattern(a,i+1,n,y);
}

int main(){

	int t,n;
	cin >> t;

	while(t--){
		ans=0;

		cin >> n;
		int a[n];

		for(int i=0;i<n;i++){
			cin >> a[i];
		}
		vector<int> x;

		pattern(a,0,n-1,x);

		cout << ans << endl;
	}
	
	return 0;
}