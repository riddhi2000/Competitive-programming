#include<bits/stdc++.h>
using namespace std;

int main(){
	int t,n;
	cin >> t;

	while(t--){
		cin >> n;
		long long x=4294967296;
		int i=0;
	
		if(i<42949){
			cout << "100000" << " ";
			i--;
		}
		if(i<n && i<42955){
			cout << "10000" << " ";
			i--;
		}
		if(i<n && i<42962){
			cout << "1000" << " ";
			i--;
		}
		if(i<n && i<42964){
			cout << "100" << " ";
			i--;
		}
		if(i<n && i<42973){
			cout << "10" << " ";
			i--;
		}
		for(;i<n;i++){
			cout << "0" << " "; 
		}
		cout << endl;
		
	}
}