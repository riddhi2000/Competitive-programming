#include<bits/stdc++.h>
using namespace std;

int main(){
	int t,n;
	cin >> t;

	while(t--){
		cin >> n;
		string s;
		vector<int> v(5,0);
		while(n--){
			cin >> s;
			if(s == "cakewalk")
				v[0]=1;
			else if(s == "simple")
				v[1]=1;
			else if(s == "easy")
				v[2]=1;
			else if(s=="easy-medium" || s=="medium")
				v[3]=1;
			else if(s=="medium-hard" || s=="hard")
				v[4]=1;
		}
		bool f=true;
		for(int i=0;i<5;i++){
			if(v[i] == 0)
				f=false;
		}

		if(f)
			cout << "Yes" << endl;
		else
			cout << "No" << endl; 
	}
}