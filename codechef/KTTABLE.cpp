#include <bits/stdc++.h>

using namespace std;

int main(){

	int t,n;
	cin >> t;

	while(t--){
		cin >> n;
		int a[n];
		int b[n];
		int count=0;
		int prevtime=0;

		for (int i = 0; i < n; ++i){
			cin >> a[i];
		}

		for (int i = 0; i < n; ++i){
			cin >> b[i];
			if(i == 0 && b[i]<=a[i])
				count++;
			else
				if(b[i] <= a[i]-a[i-1])
					count++;
		}

		cout << count << endl;


	}
	
	return 0;
}