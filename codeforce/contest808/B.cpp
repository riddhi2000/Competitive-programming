#include <bits/stdc++.h>

using namespace std;

int main(){
	int n,k;
	cin >> n >> k;

	double a[n];
	for(int i=0;i<n;i++)
		cin >> a[i];

	double ans=0.000000,temp=0;
	for(int i=0;i<k;i++){
		ans+=a[i];
	}
	temp=ans;
	
	for(int i=1;i<n-k+1;i++){
		temp=temp-a[i-1]+a[i+k-1];
		ans+=temp;
	}

	cout << fixed << setprecision(10) << (double)ans/(double)(n-k+1) << endl;

	return 0;
}