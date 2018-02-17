#include<bits/stdc++.h>
using namespace std;

int main(){
	double l,r,x,y,k;
	cin >> l >> r >> x >> y >> k;
	int f=0;

	for(int i=l;i<=r && f==0;i++){
		double a=(double)i/(double)k;

		if(floor(a)==a && a>=x && a<=y){
			cout << "YES" << endl;
			f=1;break;
		}

	}

	if(f == 0)
		cout << "NO" << endl;

}