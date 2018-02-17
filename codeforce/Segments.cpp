#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define pb push_back
#define pp pop_back
#define mp make_pair
#define MOD 1e9+7

int main(){
	int n,ans;
	ans=0;
	cin >> n;

	vector<int> v(101,0);

	for(int i=0;i<n;i++){
		for(int j=i+1;j<=n;j++){
			if(v[i] > 0){
				v[i]--;
				v[j]++;
			}
			else{
				v[j]++;
				ans++;
			}
			
		}
	}


	cout << ans << endl;	
}