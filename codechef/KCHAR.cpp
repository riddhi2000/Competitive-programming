#include <bits/stdc++.h>
using namespace std;

int main(){
	long long int t,k,j,i;
	cin >> t;
	string s="a";
	for(i=1;s.length()<1e9;i++){
		string t="";
		for(j=s.length()-1;j>=0;j--)
			(s[j] == 'a') ? t+="c" : t+="a";
		s=s+"a"+t;
	}
	
	while(t--){
		cin >> k;
		if(k > s.length()){
			if(k == s.length()+1)
				cout << 'a' << endl;
			else{
				k-=(s.length()+1);
				char temp=s[s.length()-k];
				if(temp == 'a')
					cout << 'c' << endl;
				else
					cout << 'a' << endl;
			}
		}	
		else
			cout << s[k-1] << endl;
	}
	return 0;
}

  