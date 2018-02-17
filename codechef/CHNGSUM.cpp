#include <bits/stdc++.h>
using namespace std;

int main(){
	int n;
	int m=1e9+7;
	cin >> n;
	int a[n];
	long long int sum=0;
	for(int i=0;i<n;i++)
		cin >> a[i];

	for(int i=0;i<n;i++){
		long long int maxe=a[i];
		for(int j=i;j<n;j++){
			if(a[j] > maxe)
				maxe=a[j];
			for(int k=j+1;k<n;k++){
				long long int mie=a[k];
				for(int l=k;l<n;l++){
					if(a[l] < mie)
						mie=a[l];
					sum = (sum+(maxe*mie)%m)%m;
				}
			}
		}
	}
	
	cout << sum << endl;
	return 0;
}
