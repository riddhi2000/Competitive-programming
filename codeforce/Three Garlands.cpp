#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define pb push_back
#define pp pop_back
#define mp make_pair
#define MOD 1e9+7

int main(){
	int k1,k2,k3;
	cin >> k1 >> k2 >> k3;

	if(k2 < k1){
		swap(k1,k2);
	}
	if(k3 < k1){
		swap(k1,k3);
	}
	if(k3 < k2){
		swap(k3,k2);
	}

	bool f=false;

	if(k1==1){
		f=true;
	}
	else if((k1==2 && k2==2) || (k2==2 && k3==2) || (k3==2 && k1==2)){
		f=true;
	}
	else if(k1==2 && k2==4 && k3==4){
		f=true;
	}
	else if(k1==3 && k2==3 && k3==3){
		f=true;
	}



	if(f){
		cout << "YES" << endl;
	}
	else{
		cout << "NO" << endl;
	}	
}