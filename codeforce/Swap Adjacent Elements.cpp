#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define pb push_back
#define pp pop_back
#define mp make_pair
#define MOD 1e9+7

int main(){

	long long int n;
	cin >> n;

	vector<long long int> v(n),w(n);

	for(int i=0;i<n;i++){
		cin >> v[i];
		w[i]=v[i];
	}

	sort(w.begin(),w.end());

	string s;
	cin >> s;

	bool f=false;
	long long int me=0;

	for(int i=0;i<n && !f;i++){

		me=max(me,v[i]);
		
		if(me > w[i]){

			if(s[i] == '0'){
				f=true;
				break;
			}
			me=max(me,v[i]);
		}

	}

	me=INT_MAX;

	for(int i=n-1;i>0 && !f;i--){

		me=min(me,v[i]);
		
		if(me < w[i] ){

			if(s[i-1] == '0'){
				f=true;
				break;
			}
			me=min(me,v[i]);
		}

	}

	if(f){
		cout << "NO" << endl;
	}
	else{
		cout << "YES" << endl;
	}

}