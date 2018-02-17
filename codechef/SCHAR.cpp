#include <bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin >> t;

	while(t--){
		string s;
		cin >> s;

		int n=s.length();
		vector<long long> v(n,INT_MAX);
		v[0]=0;

		for(int i=1;i<n;i++){
			for(int j=0;j<i;j++){
				v[i]=min(v[i],v[j]+abs(s[i]-s[j]));
			}
			//cout << v[i] << " " << endl;
		}

		cout << v[n-1] << endl;
	}
	
	return 0;
}