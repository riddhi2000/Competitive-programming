#include <bits/stdc++.h>
using namespace std;

int main(){
	int t,n;
	cin >> t;

	for(int k=1;k<=t;k++){
		cin >> n;
		vector<int> v(n);

		for(int i=0;i<n;i++){
			cin >> v[i];
		}
		string ans="NO";
		int len=n;
		int l=1,r=n;

		int m=(len-1)/2;
		if(v[m]==l){
			l++;
			len--;
		}
		else if(v[m]==r){
			r--;
			len--;
		}
		
		int ll=m-1,rr=m+1;
		if(n%2 == 0 && len+1==n){
			if(v[rr]==l){
				l++;rr++;
				len--;
			}
			else if(v[rr]==r){
				r--;rr++;
				len--;
			}
		}

		if((n%2==0 && len+2 == n) || (n%2!=0 && len+1==n) ){
			while(len){
				if(len && ll>=0){
					if(v[ll]==l){
						l++;ll--;
						len--;
					}
					else if(v[ll]==r){
						r--;ll--;;
						len--;
					}
					else{
						break;
					}
				}
				if(len && rr<n){
					if(v[rr]==l){
						l++;rr++;
						len--;
					}
					else if(v[rr]==r){
						r--;rr++;
						len--;
					}
					else{
						break;
					}
				}
			}
		}

		if(len == 0)
			ans="YES";

		cout << "Case #" << k << ": " << ans << endl;

	}
}