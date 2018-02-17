#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define pb push_back
#define pp pop_back
#define mp make_pair
#define MOD 1e9+7

bool c(int h){
	if(h%10==7 || h/10==7){
		return true;
	}
	return false;
}

int main(){
	int x,h,m;
	cin >> x >> h >> m;
	int ans=0;


	while((ans%x) || !c(h) || c(m)){
		ans++;
		m--;
		if(m == -1){
			m=59;
			h--;
			if(h == -1)
				h=23;
		}
	}

	cout << ans/x << endl;

}