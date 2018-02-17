#include<bits/stdc++.h>
using namespace std;

int main(){
	int t,x,y;
	cin >> t;

	while(t--){
		string s;
		cin >> s;
		cin >> x >> y;

		string ans="";

		int a=0,b=0;
		for(int i=0;i<s.length();i++){
			if(s[i]=='a')
				a++;
			else
				b++;
		}
		int ca,cb;
		if(a>=b){
			while(true){
				if(a<=0)
					break;
				ca=0;
				while(ca<x && a>0){
					ans+='a';ca++;a--;
				}
				cb=0;
				if(b<=0)
					break;
				while(cb<y && b>0){
					ans+='b';cb++;b--;
				}
			}
		}
		else{
			while(true){
				if(b<=0)
					break;
				cb=0;
				while(cb<y && b>0){
					ans+='b';cb++;b--;
				}
				ca=0;
				if(a<=0)
					break;
				while(ca<x && a>0){
					ans+='a';ca++;a--;
				}
			}
		}
		
		while(b>0){
			if(ans[ans.length()-1]=='b')
				ans+='*';
			cb=0;
			while(cb<y && b>0){
				ans+='b';cb++;b--;
			}
		}

		while(a>0){
			if(ans[ans.length()-1]=='a')
				ans+='*';
			ca=0;
			while(ca<x && a>0){
				ans+='a';ca++;a--;
			}
		}

		cout << ans << endl;
		
	}
}