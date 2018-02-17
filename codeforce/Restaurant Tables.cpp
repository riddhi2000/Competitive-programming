#include <bits/stdc++.h>
using namespace std;

int main(){
	long long int n,a,b;
	cin >> n >> a >> b;

	long long int b1=0;
	long long int t,ans=0;

	for(int i=0;i<n;i++){
		cin >> t;
		if(t == 2){
			if(b > 0) b--;
			else ans+=2;
		}
		else if(t == 1){
			if(a > 0)	a--;
			else if(b > 0){
				b--; 
				b1++;
			}
			else if(b1 > 0){
				b1--;
			}
			else ans++;
		}

	}
	cout << ans << endl;

	return 0;
}

  