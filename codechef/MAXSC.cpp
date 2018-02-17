#include<bits/stdc++.h>
using namespace std;

int main(){
	int t,n;
	cin >> t;

	while(t--){
		long ans=0;	
		bool f=true;

		cin >> n;
		vector<vector<int> > v(n,vector<int>(n));
		for(int i=0;i<n;i++){
			for(int j=0;j<n;j++)
				cin >> v[i][j];
		}

		int last=INT_MAX,c=0;
		for(int i=n-1;i>=0;i--){
			for(int j=0;j<n;j++){
				if(v[i][j] < last)
					c=max(c,v[i][j]);
			}
			if(c == 0){
				f=false;
			}
			ans+=c;
			last=c;
			c=0;
		}

		if(!f) ans=-1;
		cout << ans << endl;

	}
}