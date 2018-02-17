#include<bits/stdc++.h>
using namespace std;

int main(){
	int t,n,k,s;
	cin >> t;

	while(t--){
		cin >> n >> k >> s;
		int cur=0,ans=0;
		
		if(s>=7 && n*6<k*7){
			cout << "-1" << endl;
		}
		else{
			while(s>0){
				if(cur < k){
					cur+=n;
					ans++;
				}
				cur-=k;
				if(cur < 0){
					ans=-1;break;
				}
				s--;
			}

			cout << ans << endl;
		}	
	}
}