#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define pb push_back
#define pp pop_back
#define mp make_pair
#define MOD 1e9+7

int main(){
	long n;
	cin >> n;

	long ans=0;

	for(int i=1;i<=n;i++){
		ans+=i;
	}

	if(ans%2 == 0){
		cout << "0" << endl;
	}
	else{
		cout << "1" << endl;
	}

	ans/=2;

	long x=n;
	vector<long> v;

	//cout << ans << endl;

	while(ans>0){

		if(x <= ans){
			v.push_back(x);
			ans-=x;
		}
		
		x--;
	}

	//sort(v.begin(),v.end());
	cout << v.size() << " ";
	for(int i=0;i<v.size();i++){
		cout << v[i] << " ";
	}	
	cout << endl;
}