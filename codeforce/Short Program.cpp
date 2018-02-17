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

	char ch;
	int x;

	int ans=3;
	int f=0,s=0,t=0;

	for(int i=0;i<n;i++){
		cin >> ch >> x ;
		if(ch == '|'){
			f |= x;
			if(s>0)
			s |= x;
			if(t>0)
			t |= x;
		}
		else if(ch == '&'){
			if(f>0)
				f &= x;
			if(s == 0)
				s=x;
			else
				s&=x;
			if(t>0)
				t &= x;
		}
		else if(ch == '^'){
			if(f>0)
			f ^= x;
			if(s>0)
			s ^= x;
			t ^= x;
		}
	}

	if(f == 0) ans--;
	if(s == 0) ans --;
	if(t == 0) ans --;

	cout << ans << endl;
	if(f > 0)
	cout << "|" << " " << f << endl;
	if(s > 0)
	cout << "&" << " " << s << endl;
	if(t > 0)
	cout << "^" << " " << t << endl;


}