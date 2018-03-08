#include<bits/stdc++.h>
using namespace std;

#define ll long long

int main(){
	int t,n;
	cin >> t;

	while(t--){
		cin >> n;

		vector<int> s(n);
		for(int i=0;i<n;i++){
			cin >> s[i];
		}

		vector<int> ans(n,0);

		for(int i=0;i<n;i++){
			ll j=i-1,k=i+1,fs=0,ls=0;

			while(j>=0 || k<n){
				
				if(j>=0){
					if(fs<=s[i])
						ans[j]++;
					fs+=s[j];j--;
				}

				if(k < n){
					if(ls<=s[i])
						ans[k]++;
					ls+=s[k];k++;
				}

			}
		}

		for(int i=0;i<n;i++){
			cout << ans[i] << " ";
		}
		cout << endl;
	}
}