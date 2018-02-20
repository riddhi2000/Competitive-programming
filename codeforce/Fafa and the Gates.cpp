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

	string s;
	cin >> s;

	int c=0,x=0,y=0,ans=0;

	for(int i=0;i<n;i++){

		if(s[i] == 'U'){
			y++;
		}
		else{
			x++;
		}

		if(y > x){
			if(c==-1){
				c=1;ans++;
			}
			c=1;
		}

		if(y < x){
			if(c==1){
				c=-1;ans++;
			}
			c=-1;
		}
	}

	cout << ans << endl;	
}