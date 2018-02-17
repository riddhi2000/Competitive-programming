#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define pb push_back
#define pp pop_back
#define mp make_pair
#define MOD 1e9+7

int main(){
	int ans=0,x=0;
	int a[6];

	for(int i=0;i<6;i++){
		cin >> a[i];
		ans+=a[i];
	}

	bool f=false;

	for(int i=0;i<6;i++){
		for(int j=i+1;j<6;j++){
			for(int k=j+1;k<6;k++){
				int t=a[i]+a[j]+a[k];
				if(t == ans-t){
					f=true;
				}
			}
		}
	}

	if(f)
		cout << "YES" << endl;
	else 
		cout << "NO" << endl;	
}