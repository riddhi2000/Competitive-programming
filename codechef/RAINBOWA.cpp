#include<bits/stdc++.h>
using namespace std;

int main(){
	int t,n,i,j,x;
	cin >> t;

	while(t--){
		cin >> n;
		int a[n];
		bool f=true;

		for(i=0;i<n;i++)
			cin >> a[i];
		x=0;

		for(i=0,j=n-1;i<j;i++,j--){
			x=max(x,a[i]);
			if( (a[0] != 1)|| (a[i]<1 || a[i]>7) || (i>0 && a[i]-a[i-1]>1) || (a[i] != a[j])){
				f=false;
				break;
			}
		}
		x=max(x,a[i]);
		if(x!=7  || (i>0 && a[i]-a[i-1] > 1))
			f=false;

		if(f == true)
			cout << "yes" << endl;
		else
			cout << "no" << endl;
	}
}