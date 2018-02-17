#include <bits/stdc++.h>
using namespace std;

int main(){
	int c,v0,v1,a,l;
	cin >> c >> v0 >> v1 >> a >> l;

	int count=0;


	if(c != 0){
		count++;
		c-=v0;

		while(c > 0){
			v0+=a;
			if(v0 > v1){
				v0=v1;
			}
			if(l > v0) c+=v0;
			else c+= l;

			c-=v0;
			count++;
		}
	}
	
	
	cout << count << endl;

	return 0;
}

  