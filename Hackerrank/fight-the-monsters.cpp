#include <bits/stdc++.h>

using namespace std;

int main(){

	int n,hit,t;

	cin >> n >> hit >> t;


	int a[n];
	for (int i = 0; i < n; ++i){
		cin >> a[i];
	}

	sort(a,a+n);

	int count=0;

	for (int i = 0; i < n && t>0;)
	{
		a[i]-=hit;
		if(a[i] <= 0){
			i++;count++;
		}
		t--;
	}

	cout << count  << endl;

	return 0;
}