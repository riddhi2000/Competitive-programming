#include<bits/stdc++.h>
using namespace std;

int main(){
	int n;
	cin >> n;
	int a[n];

	for(int i=0;i<n;i++)
		cin >> a[i];

	std::vector<unsigned int> prefSum(n), sufSum(n);
	prefSum[0] = a[0];
	cout << "=--===="<< endl << a[0] << endl;
	for (int i = 1; i < n; i++) {
		prefSum[i] = prefSum[i - 1] + a[i];
	}
	sufSum[n - 1] = a[n - 1];
	for (int i = n - 2; i >= 0; i--) {
		sufSum[i] = sufSum[i + 1] + a[i];
	}
	unsigned int mn = prefSum[0] + sufSum[0];
	int where = 0;
	for (int i = 1; i < n; i++) {
		unsigned int val = prefSum[i] + sufSum[i];
		cout << val << endl;
		if (val < mn) {
			mn = val;
			where = i + 1;
		}
	}
	cout <<  where << endl;
	

}