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

	long long x,ct=0;
	bool f=false;

	for(int i=0;i<n;i++){
		cin >> x;
		ct+=x;
	}

	vector<long long> v(n);
	for(int i=0;i<n;i++){
		cin >> v[i];
	}

	sort(v.begin(),v.end());

	for(int i=0,j=n-1;i<j;){
		if(v[i]+v[j] >= ct){
			f=true;break;
		}
		else if(v[i]+v[j] < ct){
			i++;
		}
	}

	if(f)
		cout << "YES" << endl;
	else
		cout << "NO" << endl;	
}