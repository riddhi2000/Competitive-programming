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

	vector<int> a(n);
	for(int i=0;i<n;i++){
		cin >> a[i];
	}

	int pa=0,ans=0;
	for(int i=0;i<n;i++){
		if(a[i] == 0){
			ans++;pa=0;
		}
		else if(a[i] == 1){
			if(pa != 1){
				pa=1;
			}
			else{
				ans++;pa=0;
			}
		}
		else if(a[i] == 2){
			if(pa != 2){
				pa=2;
			}
			else{
				ans++;pa=0;
			}
		}
		else if(a[i] == 3){
			if(pa == 1){
				pa=2;
			}
			else if(pa == 2){
				pa=1;
			}
			else{
				pa=3;
			}
		}
	}


	cout << ans << endl;	
}