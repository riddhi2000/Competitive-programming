#include <bits/stdc++.h>
using namespace std;

int main(){

	long long  t,n,m,x=1414213563;
	cin >> t;

	while(t--){
		cin >> n >> m;
		long long  low=1,high,mid,ans=-1,ch;
		high=min(n,x);

		while(low <= high){
			mid=low+(high-low)/2;
			if(mid%2 == 0){
				ch=(mid/2);
				ch*=(mid+1);
			}
			else{
				ch=(mid+1)/2;
				ch*=mid;
			}

			if(ch >= m){
				ans=mid;
				high=mid-1;
			}
			else
				low=mid+1;
		}

		cout << ans << endl;
	}
	return 0;
}