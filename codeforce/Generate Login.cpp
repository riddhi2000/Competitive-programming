#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define pb push_back
#define pp pop_back
#define mp make_pair
#define MOD 1e9+7

int main(){

	string f,l;
	cin >> f >> l;

	string ans="";
	ans+=f[0];

	for(int i=1;i<f.length();i++){
		if(f[i] < l[0]){
			ans+=f[i];
		}
		else{
			break;
		}
	}

	ans+=l[0];

	cout << ans << endl;	
}