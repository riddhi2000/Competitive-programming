#include<bits/stdc++.h>
using namespace std;

bool isvowel(char ch){
	if(ch=='a' || ch=='e' || ch=='i' || ch=='o' || ch=='u')
		return true;
	return false; 
}

int main(){
	string s;
	cin >> s;

	string ans="";
	int count=0;
	int cc=0;

	for(int i=0;i<s.length();i++){
		if(!isvowel(s[i])){
			if(i==0 || s[i]!=s[i-1] ){
				count++;
				if(cc==1 || count == 3){
					ans += " ";
					count=1;
					if(cc == 1)
						count=0;
					cc=0;
				}	
			}
			else{
				while(i<s.length() && s[i] == s[i-1])
					ans+=s[i++];
				cc=1;
				i--;
			}
		}
		else{
			cc=0;
			count=0;
		}
		if(cc != 1)
		ans+=s[i];
	}
	cout << ans  << endl;

}