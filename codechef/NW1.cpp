#include<bits/stdc++.h>
using namespace std;

int main(){
	int t,n;
	cin >> t;

	while(t--){
		int n,a;
		cin >> n;

		string s;
		cin >> s;

		vector<int> v(7,0);

		if(s == "mon"){
			a=0;
		}
		else if(s == "tues"){
			a=1;
		}
		else if(s == "wed"){
			a=2;
		}
		else if(s == "thurs"){
			a=3;
		}
		else if(s == "fri"){
			a=4;
		}
		else if(s == "sat"){
			a=5;
		}
		else if(s == "sun"){
			a=6;
		}

		for(int i=1;i<=n;i++){
			v[a]++;
			a=(a+1)%7;
		}

		for(int i=0;i<7;i++){
			cout << v[i] << " ";
		}
		cout << endl;
	}
}