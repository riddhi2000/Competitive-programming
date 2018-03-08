#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define pb push_back
#define pp pop_back
#define mp make_pair
#define MOD 1e9+7

int main(){
	int p,y;
	cin >> p >> y;

	if(y%2 == 0){
		y--;
	}
	bool f=false;int ans=-1;

	while(y > p && f!=true){

		bool f1=true;
		
		for(int i=2;i<=sqrt(y);i++){
			if(y%i == 0 && i<=p){
				f1=false;
				break;
			}
		}
		if(f1){
			ans=y;f=true;
		}

		y-=2;
	}

	
	cout << ans << endl;
	
}