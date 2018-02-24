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
	for(int i=0;i<n;i++){
		cin >> v[i];
	}

	ll ans=0;
	
	for(int c=0;c<n;c++){
		ll ans1=0,ans2=0;

		ll sum=0;
		for(int j=0;j<c;j++){
			if(v[j] == 1) sum++;
		}
		
		ans1=sum;
		for(int j=c-1;j>=0;j--){
			if(v[j] == 2) sum++;
			else sum--;
			ans1=max(ans1,sum);
		}

		sum=0;
		for(int j=c;j<n;j++){
			if(v[j] == 2) sum++;
		}
		ans2=sum;
		for(int j=c;j<n;j++){
			if(v[j] == 1) sum++;
			else sum--;
			ans2=max(ans2,sum);
		}

		ans=max(ans,ans1+ans2);


	}	

	cout << ans << endl;
}