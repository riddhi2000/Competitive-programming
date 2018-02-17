#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define pb push_back
#define pp pop_back
#define mp make_pair
#define MOD 1e9+7

int main(){
	int n,k;
	cin >> n >> k;

	vector<int> a(n);
	vector<int> lm(n);
	int x=INT_MAX,y=INT_MIN;

	for(int i=0;i<n;i++){
		cin >> a[i];
		if(i==0)
			lm[i]=a[i];
		else
			lm[i]=min(lm[i-1],a[i]);

		x=min(x,a[i]);
		y=max(y,a[i]);
	}

	//sort(a.begin(),a.end());

	if(k==1){
		cout << x << endl;
	}
	else if(k==2){
		int rm=a[n-1];
		int ans=max(lm[n-2],rm);

		for(int i=n-2;i>0;i--){
			rm=min(rm,a[i]);
			ans=max(ans,max(lm[i-1],rm));
		}
		cout << ans << endl;
	}
	else{
		cout << y << endl;
	}


}