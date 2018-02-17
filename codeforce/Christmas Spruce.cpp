#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define pb push_back
#define pp pop_back
#define mp make_pair
#define MOD 1e9+7

int main(){
	int n,x;
	cin >> n;


	vector<int> v(n+1,0);
	vector<vector<int> > z(n+1);
	for(int i=0;i<n-1;i++){
		cin >> x;
		v[x]++;
		z[x].push_back(i+2);
	}

	bool f=true;
	for(int i=1;i<=n;i++){
		if(v[i]==0){
			continue;
		}
		else{
			int c=0;
			for(auto t=z[i].begin();t!=z[i].end();t++){
				//cout << *t << endl;
				if(v[*t] == 0){
					c++;
				}
			}
			if(c >= 3){
				continue;
			}

		}
		f=false;
	}	

	if(!f){
		cout << "No" << endl;
	}
	else{
		cout << "Yes" << endl;
	}
}