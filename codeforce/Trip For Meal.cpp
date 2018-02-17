#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define pb push_back
#define pp pop_back
#define mp make_pair
#define MOD 1e9+7

int main(){
	int n,a,b,c;
	cin >> n >> a >> b >> c;

	int dist=0;
	if(n == 1){
		dist=0;
	}
	else{
		if(a<=b && a<=c){
			dist=(n-1)*a;
		}
		else if(b<=c && b<=a){
			dist=(n-1)*b;
		}
		else{
			dist=min(a,b);
			dist+=(n-2)*c;
		}
	}

	cout << dist << endl;
}