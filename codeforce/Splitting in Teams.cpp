#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define pb push_back
#define pp pop_back
#define mp make_pair
#define MOD 1e9+7

int main(){
	int n,x;
	cin >> n;
	
	int t=0,o=0;

	for(int i=0;i<n;i++){
		cin >> x;
		if(x == 1){
			o++;
		}
		else{
			t++;
		}
	}

	int ans=0;

	ans=min(t,o);
	o-=ans;
	ans+=o/3;

	cout << ans << endl;

}