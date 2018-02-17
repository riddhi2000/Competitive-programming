#include<bits/stdc++.h>
using namespace std;

long long digSum(long long n){
    if (n == 0) 
       return 0;
    return (n % 9 == 0) ? 9 : (n % 9);
}


int main(){
	long long t,n,a,x;
	cin >> t;

	while(t--){
		cin >> a >> n;
		vector<int> v;

		v.push_back(1);
		a=digSum(a);
		long long ans=a;

		while(true){
			x=digSum(ans);
			if(x == v[0] ){
				break;
			}
			else{
				ans*=a;
				v.push_back(x);
			}
		}
		
		n%=v.size();
		cout << v[n] << endl;
		
	}
}