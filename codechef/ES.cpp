#include <bits/stdc++.h>
using namespace std;

int main(){

	int n,j,x;
	cin >> n ;

	long long int ans=0;
	double e=2.7182818284;

	int arr[]={3,3,2,3,3,3,2};
	if(n >= 1){
		x=2;
		ans=2;
	}
	
	j=0;
	for(int i=2;i<=n;i++){
		x += arr[j++];
		ans += x;
		if(j == 7)
			j=0;
	}
	
	cout << ans << endl;
	
	return 0;
}