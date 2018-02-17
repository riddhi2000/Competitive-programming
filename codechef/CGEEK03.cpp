#include<bits/stdc++.h>
using namespace std;

int main(){
	int t,n,m;
	cin >> t;

	while(t--){
		cin >> n >> m;
		vector<int> a(n);
		for(int i=0;i<n;i++)
			cin >> a[i];

		sort(a.begin(),a.end());

		int i=0,j=n-1;
		while(i<j){
			if(a[i]+a[j]>m)
				j--;
			else if(a[i]+a[j] < m)
				i++;
			else 
				break;
		}
		//cout << i << " " << j << endl;
		//cout << a[i]+a[j] << endl;

		if(i!=j && a[i]+a[j] == m){
			cout << "yes" << endl;
		}
		else
			cout << "no" << endl;
	}
}