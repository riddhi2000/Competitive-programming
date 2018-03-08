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
	set<int> s;

	bool f=false;
	
	for(int i=0;i<n;i++){
		cin >> v[i];
		s.insert(v[i]);
		if(v[i] == 0){
			f=true;
		}
	}

	if(f){
		cout << s.size()-1 << endl;
	}
	else{
		cout << s.size() << endl;
	}


}