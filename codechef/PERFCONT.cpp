#include<bits/stdc++.h>
using namespace std;

int main(){
	int t,n,p,x;
	cin >> t;

	while(t--){
		cin >> n >> p;

		int c=0,h=0;

		for(int i=0;i<n;i++){
			cin >> x;
			
			if(x <= p/10)
				h++;
			else if(x >= p/2)
				c++;
		}

		if(c == 1 && h==2)
			cout << "yes" << endl;
		else
			cout << "no" << endl;
	}
}