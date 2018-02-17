#include<bits/stdc++.h>
using namespace std;

int main(){
	int t,n;
	cin >> t;

	for(int i=1;i<=t;i++){
		string s;
		cin >> s;
		n=s.length();

		int ans=n;

		for(int len=2;len<n;len++){
			int tans=len;string clip="";
			for(int i=len;i<n;){
				string x=s.substr(i,len);
				//cout << x << " " << len << endl;
				string y=s.substr(0,i);
				//cout << y << " " << len << endl;
				if (clip.find(x) != std::string::npos) {
				    tans++;i=i+len;
				}
				else if(y.find(x) != std::string::npos){
					tans+=2;i=i+len;clip=y;
				}
				else{
					i++;tans++;
				}
			}
			ans=min(ans,tans);
		}
		cout << "Case #" << i << ": " << ans << endl;
	}
}