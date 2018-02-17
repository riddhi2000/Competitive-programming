#include<bits/stdc++.h>
using namespace std;

int main(){
	int t,n;
	cin >> t;

	while(t--){
		int n,x,ans;
		cin >> n;

		ans=INT_MAX;

		map<int,int> m;
		for(int i=0;i<n;i++){
			cin >> x;
			m[x]++;
		}

		int c=0;

		for(auto it=m.begin();it!=m.end();it++){
			if(it->second == c){
				c=it->second;
				ans=min(ans,it->first);
			}
			else if(it->second > c){
				c=it->second;
				ans=it->first;
			}
		}

		cout << ans << endl;
	}
}