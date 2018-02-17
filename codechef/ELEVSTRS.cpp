#include<bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin >> t;
	double n,v1,v2;

	while(t--){
		cin >> n >> v1 >> v2;

		double t1=sqrt(2)*n/v1;

		double t2=(2*n)/v2;

		if(t2 < t1)
			cout << "Elevator" << endl;
		else
			cout << "Stairs" << endl;

	}
}