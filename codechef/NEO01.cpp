#include <bits/stdc++.h>

using namespace std;

void solve(){
	long long int ans=0;
	int count=0;
	int n,i;
	cin >> n;
	long long int temp=0;

	int a[n];
	for(int i=0;i<n;i++){
		cin >> a[i];
		
		// if((count+1)*(temp+a[i]) >= (temp*count)+a[i]){
		// 	temp=temp+a[i];
		// 	count++;
		// }
		// else{
		// 	ans+=temp*count;
		// 	count=1;temp=a[i];
		// }

	}
	sort(a,a+n);
	for(int i=n-1;i>=0;i--){
		if((count+1)*(temp+a[i]) >= (temp*count)+a[i]){
			temp=temp+a[i];
			count++;
		}
		else{
			ans+=temp*count;
			count=1;temp=a[i];
		}
	}
	if(count > 0)
		ans+= (temp*count);

	cout << ans << endl;
}

int main(){

	int t;
	cin >> t;

	while(t--){
		solve();
	}

	return 0;
}