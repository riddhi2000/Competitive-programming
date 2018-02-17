#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define pb push_back
#define pp pop_back
#define mp make_pair
#define MOD 1e9+7

int main(){
	int n,s,f;
	cin >> n;

	vector<ll> v(n);
	for(int i=0;i<n;i++){
		cin >> v[i];
	}

	cin >> s >> f;
	
	int x=f-s;
	ll c=0;

	for(int i=0;i<min(x,n);i++){
		c+=v[i];
	}

	ll z=c;

	vector<int> vx;
	vx.pb(0);

	for(int i=0,j=x;i<n;i++){
		z=z-v[i]+v[j];

		if(z > c){
			c=z;vx.clear();vx.pb(i+1);
		}
		else if(z == c){
			vx.pb(i+1);
		}
		j=(j+1)%n;
	}


	//cout << si << endl;
	int ans =INT_MAX;

	for(int i=0;i<vx.size();i++){
		int si=vx[i];
		int ss=s;
		//cout << si << endl;

		while(si > 0){

			if(ss > 1) ss--;
			else ss=n;

			si--;
			//cout << ss << endl;
		}
		ans=min(ans,ss);
	}
	

	cout << ans << endl;


}