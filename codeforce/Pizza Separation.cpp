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
	for(int i=0;i<n;i++){
		cin >> v[i];
	}

	int mans=360,cur=0;

	for(int i=0,j=0;j<n;){
		
		if(i<n){
			cur+=v[i];
			i=(i+1)%n;
		}
		
		while(j<n && cur > 180){
			cur-=v[j++];
		}

		if(360-2*cur >= 0)
			mans=min(mans,360-2*cur);
	}

	cout << mans << endl;

}