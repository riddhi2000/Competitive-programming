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


	int ans=0,cc=1;

	vector<int> v(n);
	for(int i=0;i<n;i++){
		cin >> v[i];

		if(i > 0){
			if(v[i] > v[i-1]){
				cc++;
			}
			else{
				cc=1;
			}
		}
		ans=max(ans,cc);
	}

	cout << ans << endl;

}