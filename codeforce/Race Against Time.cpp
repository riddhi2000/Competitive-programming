#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define pb push_back
#define pp pop_back
#define mp make_pair
#define MOD 1e9+7

int main(){
	int h,m,s,t1,t2;
	cin >> h >> m >> s >> t1 >> t2;

	bool f=false;

	if(h==t1 || h==t2)
		f=true;

	if(h+1 == t1 || h+1==t2)
		f=true;



	if(f)
		cout << "YES" << endl;
	else
		cout << "NO" << endl;
}