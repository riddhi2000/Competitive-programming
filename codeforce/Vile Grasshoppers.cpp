#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define pb push_back
#define pp pop_back
#define mp make_pair
#define MOD 1e9+7

int main(){
	ll p,y;
	cin >> p >> y;


	vector<bool>  v(40000,true);
	vector<int> x;

	for(int i=2;i<=40000;i++){
		x.pb(i);

		if(v[i]){
			for(int j=i+i;j<40000;j+=i){
				v[j]=false;
			}
		}
	}

	bool f=false;
	int ans=-1;

	while(y > p && f==false){

		bool f1=true;

		for(int i=0;i<x.size() && x[i]<=p;i++){

			if(y%x[i] == 0){
				f1=false;
				break;
			}

		}
		if(f1){
			ans=y;f=true;
		}

		y--;
	}

	cout << ans << endl;
	
}