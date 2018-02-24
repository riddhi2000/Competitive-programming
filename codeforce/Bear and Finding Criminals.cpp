#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define pb push_back
#define pp pop_back
#define mp make_pair
#define MOD 1e9+7

int main(){
	int n,a;
	cin >> n >> a;

	vector<int> t(n);
	for(int i=0;i<n;i++){
		cin >> t[i];
	}

	a--;
	int ans=0;

	if(t[a] == 1 ){
		ans=1;
	}
	int cd=1;

	while(cd<n){
		int l=a-cd;
		int r=a+cd;

		if(l>=0 && r<n){
			if(t[l]==1 && t[r]==1){
				ans+=2;
			}
		}
		else if(l>=0){
			if(t[l] == 1){
				ans++;
			}
		}
		else if(r<n){
			if(t[r] == 1){
				ans++;
			}	
		}
		cd++;
	}

	cout << ans << endl;	
}