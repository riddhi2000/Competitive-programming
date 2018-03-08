#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define pb push_back
#define pp pop_back
#define mp make_pair
#define MOD 1e9+7

int main(){
	int n,a,b;
	cin >> n >> a >> b;

	vector<int> v;
	for(int i=1;i<=n;i++){
		v.pb(i);
	}

	int r=log2(n);
	//cout << r << endl;

	int ans=0;

	bool f=true;

	while(f){

		vector<int> x;
		ans++;

		for(int i=0;i<v.size();i++){

			if(i+1 < v.size()){
				if((v[i]==a && v[i+1]==b) || (v[i]==b && v[i+1]==a)   ){
					f=false;break;
				}
				else if(v[i]==a || v[i]==b){
					x.pb(v[i]);
				}
				else{
					x.pb(v[i+1]);
				}
				i++;
			}
			else{
				x.pb(v[i]);
			}

		}

		v=x;
	}

	if(ans == r){
		cout << "Final!" << endl;
	}
	else{
		cout << ans << endl;
	}	
}