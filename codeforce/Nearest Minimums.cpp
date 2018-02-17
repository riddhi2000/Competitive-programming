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

	int m=INT_MAX;
	for(int i=0;i<n;i++){
		cin >> v[i];
		if(v[i] < m){
			m=v[i];
		}
	}

	int ans=INT_MAX,p=-1;
	
	for(int i=0;i<n;i++){
		if(v[i] == m){
			if(p == -1){
				p=i;
			}
			else{
				ans=min(ans,i-p);
				p=i;
			}
		}
	}



	cout << ans << endl;
}