#include <bits/stdc++.h>
using namespace std;

int main(){
	int n,k,nz;
	cin >> n >> k;

	int a[n],b[k];

	nz=0;

	for(int i=0;i<n;i++){
		cin >> a[i];
		if(a[i] == 0)
			nz++;
	}

	for(int i=0;i<k;i++)
		cin >> b[i];

	if(k>=nz && nz>1){
		cout << "Yes" << endl;
 	}
	else if(k>=nz && nz==1){
		int i;
		if(a[0] == 0)
			a[0]=b[0];
		for(i=1;i<n;i++){
			if(a[i] == 0)
				a[i]=b[0];
			if(a[i]<a[i-1]){
				cout << "Yes" << endl;
				break;
			}
		}
		if(i == n)
			cout << "No" << endl;

	}
	else{
		cout << "No" << endl;
	}
	
	return 0;
}