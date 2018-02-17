#include<bits/stdc++.h>
using namespace std;

#define ll long long

int main(){
	int n,x;
	cin >> n;

	ll ans=0;
	multiset<int> ms;

	for(int i=0;i<n;i++){
		cin >> x;
		if(!ms.empty() && *ms.begin()<x){
			ans+=(ll)(x-*ms.begin());
			ms.erase(ms.begin());
			ms.insert(x);
			//ms.insert(x);
		}
		else{
			ms.insert(x);
		}
	}


	cout << ans << endl;
}