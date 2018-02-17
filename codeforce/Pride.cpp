#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define pb push_back
#define pp pop_back
#define mp make_pair
#define MOD 1e9+7

int main(){
	int n;
	cin >> n;

	vector<int> v(n);
	
	int count=0;
	for(int i=0;i<n;i++){
		cin >> v[i];
		if(v[i] == 1){
			count++;
		}
	}

	if(count > 0){
		cout << n-count << endl;
	}
	else{
		long long ans=INT_MAX;

		for(int i=1;i<n && ans>1;i++){

			int x=__gcd(v[i],v[i-1]);
			int y=x;

			long long count=1;
			int j=i-2;

			while(j>=0 && x!=1){
				x=__gcd(x,v[j]);
				j--;count++;
			}
			if(x == 1)
				ans=min(ans,count);


			count=1;
			j=i+1;x=y;
			while(j<n && x!=1){
				x=__gcd(x,v[j]);
				j++;count++;
			}
			if(x == 1)
				ans=min(ans,count);
		}

		if(ans == INT_MAX)
			cout << "-1" << endl;
		else
			cout << ans+n-1 << endl;
	}

	
}