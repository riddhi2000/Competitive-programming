#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define pb push_back
#define pp pop_back
#define mp make_pair
#define MOD 1e9+7

int main(){
	long long n,k;
	cin >> n >> k;

	int a[n];

	for(int i=0;i<n;i++){
		cin >> a[i];
	}
	int ans=n;

	if(k < n){
		for(int i=0;i<n && a[i]!=n;){
			int j=i+1;
			for(;j<n && a[j]<a[i];j++);
			if(j-i-1 >= k){
				ans=a[i];
				break;
			}
			i=j;
		}
	}

	cout << ans << endl;

}