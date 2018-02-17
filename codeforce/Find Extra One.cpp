#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define pb push_back
#define pp pop_back
#define mp make_pair
#define MOD 1e9+7

int main(){
	int x=0,y=0,p,q;

	int n;
	cin >> n;

	while(n--){
		cin >> p >> q;

		if(p>=0){
			y++;
		}
		else{
			x++;
		}
	}

	if(x<=1 || y<=1){
		cout << "Yes" << endl;
	}
	else{
		cout << "No" << endl;
	}	
}