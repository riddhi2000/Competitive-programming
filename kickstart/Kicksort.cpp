#include <bits/stdc++.h>
using namespace std;

int main(){
	int t,n;
	cin >> t;

	for(int k=1;k<=t;k++){
		cin >> n;
		vector<int> v(n);

		for(int i=0;i<n;i++){
			cin >> v[i];
		}
		string ans="NO";
		int len=n;
		int l=1,r=n;

		while(len){
			int m=(len-1)/2;
			if(v[m]==l){
				v.erase(v.begin() + m);
				l++;
			}
			else if(v[m]==r){
				v.erase(v.begin() + m);
				r--;
			}
			else{
				break;
			}
			len--;
		}
		if(len == 0)
			ans="YES";

		cout << "Case #" << k << ": " << ans << endl;

	}
}