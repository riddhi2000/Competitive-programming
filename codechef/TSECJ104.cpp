#include <bits/stdc++.h>

using namespace std;


int main(){
	int t,n;
	cin >> t;

	while(t--){
		cin >> n;
		vector<int> h(n);

		for(int i=0;i<n;i++)
			cin >> h[i];

		for(int i=0;i<n;i++){
			int count=0;
			for(int j=i;j>=0 && h[j]<=h[i];j--){
				count++;
			}
			cout << count << " ";
		}
		cout << endl;
	}
	
	return 0;
}