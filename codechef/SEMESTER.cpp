#include<bits/stdc++.h>
using namespace std;

int main(){
	long long t,n;
	cin >> t;

	while(t--){
		long long k;
		cin >> k;

		long long a[7],total=0;

		for(int i=0;i<7;i++){
			cin >> a[i];
			total+=a[i];
		}

		int d=0;

		k%=total;

		if(k == 0){
			for(int i=6;i>=0;i--){
				if(a[i] > 0){
					d=i;
					break;	
				}
			}
		}

		while(k > 0){
			k-=a[d];
			if(k > 0)
				d=(d+1)%7;
		}

		if(d == 0){
			cout << "Monday" << endl;
		}
		else if(d == 1){
			cout << "Tuesday" << endl;
		}
		else if(d == 2){
			cout << "Wednesday" << endl;
		}
		else if(d == 3){
			cout << "Thursday" << endl;
		}
		else if(d == 4){
			cout << "Friday" << endl;
		}
		else if(d == 5){
			cout << "Saturday" << endl;
		}
		else if(d == 6){
			cout << "Sunday" << endl;
		}
	}
}