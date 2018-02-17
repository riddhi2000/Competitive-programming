#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define pb push_back
#define pp pop_back
#define mp make_pair
#define MOD 1e9+7

int main(){
	int n,d;
	cin >> n >> d;

	vector<int> a(n);
	for(int i=0;i<n;i++)
		cin >> a[i];

	long long pres=0,c=0,e=0;

	for(int i=0;i<n;i++){
		pres+=a[i];
		if(a[i] == 0){
			if(pres < 0){
				c++;
				pres=d;
				e+=d;
			}
			else{
				e=min(e,pres);
			}
		}
		if(pres > d){
			if(pres-d <= e){
				e-=pres-d;
				pres=d;
			}
			else{
				c=-1;
				break;
			}
		}
	}	

	cout << c << endl;
}