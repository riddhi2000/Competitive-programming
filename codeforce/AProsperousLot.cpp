#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define pb push_back
#define pp pop_back
#define mp make_pair
#define MOD 1e9+7

int main(){
	int k;
	cin >> k;

	long long ans;

	if(k == 0){
		cout << "1" << endl;
	}
	else{
		if(k%2 == 0){
			ans=8;k-=2;
		}
		else{
			ans=4;k-=1;
		}

		while(k > 0 && ans<=1e18){
			if(k%2 == 0){
				ans=(ans*10)+8;k-=2;
			}
			else{
				ans=(ans*10)+4;k-=1;
			}
		}

		if(k == 0 && ans<=1e18){
			cout << ans << endl;
		}
		else{
			cout << "-1" << endl;
		}

	}

}