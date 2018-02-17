#include<bits/stdc++.h>
using namespace std;

int main(){
	int t,n,r;
	cin >> t;

	while(t--){
		cin >> n;

		int a[n];
		for(int i=0;i<n;i++)
			cin >> a[i];

		string s;
		cin >> s;

		cin >> r;
		int c=0,i;

		for(i=0;i<s.length() && c<3;i++){
			if(s[i] == '1')
				c++;
		}
		i--;
		//cout << i << endl;
		i+=r;
		//cout << i << endl;
		i%=n;
		//cout << i << endl;

		cout << a[i] << endl;
	}
}