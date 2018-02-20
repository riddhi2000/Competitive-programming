#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define pb push_back
#define pp pop_back
#define mp make_pair
#define MOD 1e9+7

int main(){
	int n,x,pt;
	cin >> n;

	vector<int> v(n);
	for(int i=0;i<n;i++){
		cin >> v[i];


		if(i == 0){
			if(v[i] == 1 || v[i]%2!=0){
				cout << "2" << endl;pt=2;
			}
			else{
				cout << "1" << endl;pt=1;
			}
		}
		else{
			if(v[i] == 1 || v[i]%2!=0){
				if(pt == 2){
					cout << "2" << endl;pt=2;
				}
				else{
					cout << "1" << endl;pt=1;
				}

			}
			else{
				if(pt == 2){
					cout << "1" << endl;pt=1;
				}
				else{
					cout << "2" << endl;pt=2;
				}
			}
		}
	}


}