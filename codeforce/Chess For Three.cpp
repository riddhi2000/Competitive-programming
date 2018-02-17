#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define pb push_back
#define pp pop_back
#define mp make_pair
#define MOD 1e9+7

int main(){
	int n,x;
	cin >> n;

	int a=1,b=1,c=0;

	bool f=true;
	while(n--){
		cin >> x;
		if(x == 1){
			if(a != 1)
				f=false;
			if(b==1){
				b=0;c=1;
			}
			else{
				b=1;c=0;
			}
		}
		else if(x == 2){
			if(b != 1)
				f=false;
			if(a==1){
				a=0;c=1;
			}
			else{
				a=1;c=0;
			}
		}
		else{
			if(c != 1)
				f=false;
			if(a==1){
				a=0;b=1;
			}
			else{
				a=1;b=0;
			}
		}
	}

	if(f)
		cout << "YES" << endl;
	else
		cout << "NO" << endl;	
}