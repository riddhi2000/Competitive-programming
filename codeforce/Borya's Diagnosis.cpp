#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define pb push_back
#define pp pop_back
#define mp make_pair
#define MOD 1e9+7

int main(){
	int n;
	int s,d;

	cin >> n ;
	vector<int> a(1001,0);

	cin >> s >> d;
	int m=s;

	for(int i=1;i<n;i++){
		cin >> s >> d;

		if(s > m){
			m=s;
		}
		else{
			while(s <= m){
				s+=d;
			}
			m=s;
		}
	}	

	cout << m << endl;
}