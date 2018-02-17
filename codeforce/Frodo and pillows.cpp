#include<bits/stdc++.h>
using namespace std;

int main(){
	int n,m,k;
	cin >> n >> m >> k;

	int h=1;
	m=m-n;

	int ll=k,rr=k;

	while(m > 0){
		if(rr-ll+1 <= m){
			m-=rr-ll+1;
			h++;
		}
		else{
			break;
		}
		if(ll>1)ll--;
		if(rr<n)rr++;

		if(ll==rr && ll==1 && rr==n){
			h+=m/n;
			break;
		}
	}

	cout << h << endl;
}