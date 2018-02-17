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

	int a[n];
	for(int i=0;i<n;i++){
		cin >> a[i];
	}

	int c=0;
	
	for(int i=1;i<n-1;i++){
		if(a[i]>a[i-1] && a[i]>a[i+1])
			c++;
		else if(a[i]<a[i-1] && a[i]<a[i+1]){
			c++;
		}
	}

	cout << c << endl;	
}