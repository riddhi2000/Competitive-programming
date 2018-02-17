#include <bits/stdc++.h>
using namespace std;

int main(){
	int t,i;
	cin >> t;
	string s;
	string s1,s2,s3;

	while(t >= 0){
		t--;
		s="";
		getline(cin, s);

		s1="";s2="";s3="";
		string temp="";
		int n=s.length();
		i=0;

		while(i<n && s[i]!=' ')
			s3+=tolower(s[i++]);
		
		s3[0]=toupper(s3[0]);
		i++;

		if(i < n ){
			temp+=s3[0];
			temp+=". ";
			while(i<n && s[i]!=' ')
				s2+=tolower(s[i++]);
			s2[0]=toupper(s2[0]);
			i++;
		}
		else
			temp=s3;
		
		if(i < n){
			temp += s2[0];
			temp += ". ";
			while(i<n && s[i]!=' ')
				s1+=tolower(s[i++]);
			s1[0]=toupper(s1[0]);
			temp += s1;
		}
		else{
			temp += s2;
		}
		
		cout << temp << endl;
	}

	return 0;
}

  