#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define pb push_back
#define pp pop_back
#define mp make_pair
#define MOD 1e9+7

int main(){
	int v1,v2,v3,vm,i,j,k;
	cin >> v1 >> v2 >> v3 >> vm;

	bool f=false;


	for(i=2*v1;i>=v1 && !f;i--){
		
		for(j=i-1;j>=v2 && !f ;j--){
			
			for(k=j-1;k>=v3 && !f ;k--){

				if(j<=2*v2 && k<=2*v3 && k>=vm && k<=2*vm && i>2*vm && j>2*vm){
					cout << i << endl << j << endl << k << endl;
					f=true;
					break;
				}
			}
			
		}
	}

	
	if(!f){
		cout << "-1" << endl;
	}	
}