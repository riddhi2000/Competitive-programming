#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define pb push_back
#define pp pop_back
#define mp make_pair
#define MOD 1e9+7

int main(){
	int n,k,m;
	cin >> n >> k >> m;

	vector<int> a(n);
	map<int,vector<int> > h;
	for(int i=0;i<n;i++){
		cin >> a[i];
		h[(a[i]%m)].push_back(a[i]);
	}

	bool f=false;
	map<int,vector<int> > :: iterator it;

	for(it=h.begin();it!=h.end();it++){
		if(it->second.size()>=k){
			f=true;
			cout << "Yes" << endl;
			vector<int> t=it->second;
			for(int i=0;i<k;i++){
				cout << t[i] << " ";
			} 
			cout << endl;
			break;
		}
	}
	if(!f){
		cout << "No" << endl;
	}

}