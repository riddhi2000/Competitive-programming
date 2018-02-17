#include<bits/stdc++.h>
using namespace std;

int main(){
	long long t,n,cn;
	cin >> t;

	while(t--){
		cin >> n;
		int count=0;
		bool f=true;
		cn=n;
		vector<int> v(10,0);

		while(n!=0 && count != 10){

			long long n1=cn;
			while(n1){
				if(v[n1%10] == 0){
					count++;
					v[n1%10]=1;
				}
				n1/=10;
			}
			cn+=n;
		}

		if(n == 0)
			f=false;

		if(f)
			cout << cn-n << endl;
		else
			cout << "INSOMNIA" << endl;

	}
}