#include<bits/stdc++.h>
using namespace std;

long long gcd(long long u, long long v){
   
    while ( v != 0) {
        long long r = u % v;
        u = v;
        v = r;
    }
    return u;


}


int main(){
	long long n,k;
	cin >> n >> k;

	
	long long x=1;
	while(k--){
		x*=10;
	}

	cout << n*x/gcd(max(n,x),min(x,n)) << endl;

}