#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define pb push_back
#define pp pop_back
#define mp make_pair
#define MOD 1e9+7

bool c(int h,int m){
	if(h%10==7 || h/10==7){
		return true;
	}
	if(m%10==7 || m/10==7){
		return true;
	}
	return false;
}

int main(){
	int x,h,m;
	cin >> x >> h >> m;
	int ans=0;

	bool f=c(h,m);


	while(!f){
		if(m-x >= 0){
			m-=x;
			if(m == 0){
				h-=1;
			}
			if(h < 0){
				h=23;
			}
		}
		else{
			int t=m-x;
			h-=1;
			m=60-abs(t);
			if(h < 0){
				h=23;
			}
		}
		ans++;
		f=c(h,m);
	}

	cout << ans << endl;

}