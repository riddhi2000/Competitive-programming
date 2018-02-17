#include <bits/stdc++.h>
using namespace std;

int main(){
	int ans=-1;
	int n,m,x,flag=0;
	cin >> n;
	long long int a=0;

	for(int i=0;i<n;i++){
		cin >> x;
		a += x;
	}

	cin >> m;
	int l,r;

	for(int i=0;i<m;i++){
		cin >> l >> r;
		if(r >= a && flag==0){
			if(a>=l)
				ans=a;
			else
				ans=l;
			flag=1;
		}
	}

	cout << ans << endl;
	return 0;
}