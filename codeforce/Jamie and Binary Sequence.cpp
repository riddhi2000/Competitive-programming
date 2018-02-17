#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define pb push_back
#define pp pop_back
#define mp make_pair
#define MOD 1e9+7

void p(vector<int> v,int k){
	cout << "YES" << endl;
	for(int i=0;i<k;i++){
		cout << v[i] << " ";
	}
	cout << endl;
}

int main(){
	double n,k;
	cin >> n >> k;

	double t=n/k;
	int z=log2(t);

	vector<int> v(k,z);
	if(k*pow(2,z) == n){
		p(v,k);
	}
	else if(1){
		cout << z << endl;
	}
	else{
		cout << "NO" << endl;
	}
	
}