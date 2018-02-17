#include<bits/stdc++.h>
using namespace std;

int main(){
	int n,x;
	cin >> n;
	int a,b,l=0,r=0;
	bool f=true;

	for(int i=0;i<n;i++){
		cin >> x;
		if(l == 0 || x==a){
			a=x;l++;
		}
		else if(r==0 || x==b){
			b=x;r++;
		}
		else{
			f=false;
		}


	}

	if(f==false || l!=r)
		cout << "NO" << endl;
	else{
		cout << "YES" << endl;
		cout << a << " " << b << endl;
	}	
}