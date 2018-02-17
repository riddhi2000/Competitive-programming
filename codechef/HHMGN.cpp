#include <bits/stdc++.h>
using namespace std;

int main(){
	long long int t,n,s;
	cin >> t;

	while(t--){
		cin >> n >> s;
		int a[n];

		for(int i=0;i<n;i++)
			cin >> a[i];

		sort(a,a+n);
		int b[n];
		b[0]=a[0];
		for(int i=1;i<n;i++)
			b[i]=a[i]+b[i-1];

		long long int low=0,high=n-1,ts=0;
		bool flag=false;

		while(low <= high){
			int mid=(low+high)/2;
			int j=mid;
			while(mid>0 && a[mid]==a[mid-1])
				mid--;
			while(j<n-1 && a[j]==a[j+1])
				j++;

			ts=b[j];
			ts+=(n-j-1)*a[mid];
			
			if(ts == s){
				flag=true;
				cout << a[mid] << endl;
				break;
			}
			else if(ts < s)
				low=j+1;
			else
				high=mid-1;

		}

		if(flag == false)
			cout << "-1" << endl;
	}
	
	return 0;
}

  