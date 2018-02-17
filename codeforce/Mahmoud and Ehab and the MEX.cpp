#include<bits/stdc++.h>
using namespace std;

int main(){
	int n,x,t;
	cin >> n >> x;

	vector<int> a(102,-1);
	for(int i=0;i<n;i++){
		cin >> t;
		a[t]=1;
	}

	int ans=0;
	for(int i=0;i<x;i++){
		if(a[i]==-1)
			ans++;
	}
	if(a[x]==1)
		ans++;

	cout << ans << endl;
}