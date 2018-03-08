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

	vector<int> a(n);
	int x=0,y=0;
	for(int i=0;i<n;i++){
		cin >> a[i];
		if(a[i] > 0){
			x+=a[i];
		}
		else{
			y+=a[i];
		}
	}

	cout << x-y << endl;

}