#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define pb push_back
#define pp pop_back
#define mp make_pair
#define MOD 1e9+7

bool f(int h,int m){
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

	while(true){
		if(f(h,m)){
			break;
		}

		int y=x;
		while(y){
			if(m>0){m--;}
			else{
				m=59;
				if(h == 0){
					h=23;
				}
				else
					h--;
			}
			y--;
		}

		ans++;
	}

	cout << ans << endl;
}