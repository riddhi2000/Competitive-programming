#include <bits/stdc++.h>

using namespace std;

int main(){
	int t,n,x;
	cin >> t;
	bool flag=true;

	while(t--){
		flag=true;
		cin >> n;
		if(n%2 == 0){
			flag=false;
		}
			int i;
			for (i = 1; i <= n/2; ++i){
				cin >> x;
				if(x != i){
				flag =false;
			}
			}
			cin >> x;
			if(x != i){
				flag =false;
			}
			int c=i-1;
			i++;
			for (; i <= n; ++i){
				cin >> x;
				if(x != c){
					flag =false;
				}
				c--;
			}
		

		if(flag == true)
			cout << "yes" << endl;
		else
			cout << "no" << endl;


	}
	
	return 0;
}