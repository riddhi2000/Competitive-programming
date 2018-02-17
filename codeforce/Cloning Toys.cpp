#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define pb push_back
#define pp pop_back
#define mp make_pair
#define MOD 1e9+7

int main(){
	int x,y;
	cin >> x >> y;

	if(x==0 && y==0){
		cout << "No" << endl;
	}
	else if(y==1){
		if(x > 0)
			cout << "No" << endl;
		else
			cout << "Yes" << endl;
	}
	else{
		y--;
		if( y>0 && x>=y && (x-y)%2==0 ){
			cout << "Yes" << endl;
		}
		else{
			cout << "No" << endl;
		}
	}	
}