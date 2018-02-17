#include<bits/stdc++.h>
using namespace std;

int main(){
	int t,n;
	cin >> t;

	while(t--){
		string s;
		cin >> s;

		int ans=0;
		
		for(int i=0;s.length()>=4 && i<s.length()-3;i++){

			string z=s.substr(i,4);

			sort(z.begin(),z.end());

			if(z == "cefh"){
				ans++;
			}	

		}

		if(ans > 0){
			cout << "lovely" << " " << ans << endl;
		}
		else{
			cout << "normal" << endl;
		}
	}
}