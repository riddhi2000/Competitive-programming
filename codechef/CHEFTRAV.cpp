#include<bits/stdc++.h>
using namespace std;

int main(){
	int t,n;
	cin >> t;

	map<string,string> ms;
	map<string,bool> md;

	while(t--){
		cin >> n;
		string s,d;

		for(int i=0;i<n;i++){
			cin >> s;
			cin >> d;

			ms[s]=d;
			md[d]=true;
		}

		map<string,string> :: iterator it;
		for(it=ms.begin();it!=ms.end();it++){
			if(md.find(it->first)==md.end()){
				break;
			}
		} 
		
		s=it->first;
		while(ms.find(s) != ms.end()){
			cout << s << "-" << ms[s] <<" ";
			s=ms[s];
		}
		cout << endl;
	}
}