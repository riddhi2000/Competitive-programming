#include<bits/stdc++.h>
using namespace std;

int main(){
	int t,n;
	cin >> t;

	int m=INT_MAX,mm=INT_MIN;
	while(t--){
		cin >> n;
		if(n < m)
			m=n;
		if(n > mm)
			mm=n;
	}
	cout << m + mm << endl;
}