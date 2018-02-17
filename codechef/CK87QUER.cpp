#include<bits/stdc++.h>
using namespace std;

int main(){
	long long t,y;
	cin >> t;

	while(t--){
		cin >> y;

		long long ans=0;

		long long l=0,r=y;
		long long a2=y-1;
		long long s=0;

		while(l <= r){
			long long m=l+(r-l)/2;
			if(m*m <= a2){
				l=m+1;
				s=m;
			}
			else
				r=m-1;
		}
		ans += s;
		

		for(int i=2;i<=700 && y>=i;i++){
			l=0,r=INT_MAX;
			a2=y-i;
		
			while(s*s > a2){
				s--;
			}
			ans += s;

		}

		cout << ans << endl;
	}
}