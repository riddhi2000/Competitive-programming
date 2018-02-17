#include<bits/stdc++.h>
using namespace std;

int main(){
	int t,n;
	cin >> t;

	while(t--){
		int n,m,x,k;
		cin >> n >> m >> x >> k;

		string s;
		cin >> s;

		int e=0,o=0;
		for(int i=0;i<s.length();i++){
			if(s[i] == 'E'){
				e++;
			}
			else{
				o++;
			}
		}

		for(int i=1;i<=m && n>0;i++){
			if(i%2 != 0){
				n-=min(o,x);
				if(o > x){
					o-=x;
				}
				else{
					o=0;
				}
			}
			else{
				n-=min(e,x);
				if(e > x){
					e-=x;
				}
				else{
					e=0;
				}
			}
		}

		if(n <= 0){
			cout << "yes" << endl;
		}
		else{
			cout << "no" << endl;
		}
	}
}