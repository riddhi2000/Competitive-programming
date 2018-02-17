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

	long long l=0,r=0,u=0,d=0;

	for(int i=0;i<n;i++){
		if(s[i] == 'L')
			l++;
		else if(s[i] == 'R')
			r++;
		else if(s[i] == 'U')
			u++;
		else if(s[i] == 'D')
			d++;
	}

	cout << 2*min(l,r)+2*min(u,d) << endl;
}	