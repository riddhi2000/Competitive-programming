#include <bits/stdc++.h>

using namespace std;

int main(){

	float n,t,k,d;

	cin >> n >> t >> k >> d;


	int t1=ceil(n/k)*t;


	int t2= d;
	int t3 = 0;

	while(n > 0){
		n-=k;
		t3 += t;

		if(n!= 0 && t3 >= d){
			n-=k;
			t2 += t;
		}
	}

	t2 = max(t2,t3);

	if(t2 < t1)
		cout << "YES" << endl;
	else
		cout << "NO" << endl;


	return 0;
}