#include <bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin >> t;
	
	while(t--){
		int n;
		cin >> n;
		int f=0;
		if(n%2 != 0){
			f=1;
			n--;
		}
		
		cout << n << endl;
		for(int i=1;i<=n;i++){
			cout << n << endl;
			for(int j=1;j<=n;j++){
				cout << j;
				for(int k=1;k<=n;k++)
					cout << " "<< k ;
				cout << endl;
			}
		}

		if(f == 1){
			cout << "1";
		}

	}
	
	return 0;
}