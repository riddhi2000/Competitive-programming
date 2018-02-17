#include<bits/stdc++.h>
using namespace std;

int main(){
	int t,n;
	cin >> t;

	while(t--){
		cin >> n;

		map<string,int> m;
		string s;
		for(int i=0;i<n;i++){
			cin >> s ;
			m[s]++;
		}

		if(m["ab"]!=0 && m["ba"]!=0){
			cout << "3" << endl;
		}
		else if((m["ab"]!=0 && m["ba"]==0)  || (m["ba"]!=0 && m["ab"]==0)){
			cout << "2" << endl;
		}
		else if(m["a"]!=0 && m["b"]!=0){
			cout << "2" << endl;
		}
		else{
			cout << "1" << endl;
		}


	}
}