#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define pb push_back
#define pp pop_back
#define mp make_pair
#define MOD 1e9+7

int main(){
	int n;
	cin >> n;

	vector<int> v(n);
	for(int i=0;i<n;i++)
	cin >> v[i];

	int i=0,j=n-1;
	ll time=0;

	int cp=n;

	int m=1,fp=1000000;

	while(cp > 0){
		if(v[i] == m){
			//cout << i << endl;
			cp--;i++;
		}

		if(v[j] == fp){
			cp--;j--;
		}

		if(cp <= 0){
			break;
		}

		m++;fp--;
		time++;

	}	

	cout << time << endl;
}