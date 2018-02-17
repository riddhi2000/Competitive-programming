#include <bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin >> t;

	for(int z=1;z<=t;z++){
		string g;
		cin >> g;
		int l=g.length();

		int count=0;
		string prev="";

		while(true){
			prev="";
			for(int i=0;i<l;i++){
				int x=g[i]-'0';
				while(x--){
					prev+=to_string(i+1);
				}
			}
			while(prev.length() < l)
				prev+='0';
			count++;
			//cout << prev << endl;
			if(prev == g || prev.length() > g.length()) break;
			g=prev;
		}
		cout << "Case #" << z << ": " << count << endl;
	}
	
	return 0;
}

  