#include<bits/stdc++.h>
#define ll long long
using namespace std;

int main(){
	int t,n;
	cin >> t;

	while(t--){
		cin >> n;

		vector<int> v(300);
		v[0]=1;
		int len=1,carry=0;

		for(int i=1;i<=n;i++){
			for(int j=0;j<len;j++){
				int ts=v[j]*i+carry;
				v[j]=ts%10;
				carry=ts/10;
			}

			while(carry > 0){
				v[len]=carry%10;
				carry/=10;
				len++;
			}
		}

		for(int i=len-1;i>=0;i--){
			cout <<v[i];
		}
		cout << endl;
	}
}