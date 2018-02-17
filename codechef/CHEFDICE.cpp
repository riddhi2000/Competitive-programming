#include<bits/stdc++.h>
using namespace std;

int main(){
	int t,n;
	cin >> t;

	while(t--){
		cin >> n;
		int a[n];
		for(int i=0;i<n;i++)
			cout << a[i];

		int ans[]={0,1,2,3,4,5,6};
		if(n==2){
			if(ans[a[0]] == a[1]){
				ans[a[0]]=a[1]+1;
			}

		}

		for(int i=1;i<=6;i++)
			cout << ans[i] << " ";
		cout<< endl;
	}
}