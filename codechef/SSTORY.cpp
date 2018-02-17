#include <bits/stdc++.h>
using namespace std;

const int d=256;

void search(string s1,string s2,int q){
	int n=s1.length(),m=s2.length();
	int i,j,p=0,h=0,t=0;

	for(int i=0;i<m;i++){
		h=(h*d)%q;
	}

	for(int i=0;i<m;i++){
		p=(p*d+s2[i])%q;
		t=(t*d+s1[i])%q;
	}


	for(int i=0;i<=n-m;i++){
		string s="";
		if(p == t){
			
			for(int j=0;j<m;j++){
				s+=s2[j];
				if(s2[j] != s1[i+j])
					break;
			}
		}

		if(j == m) cout << s << endl;

		if(i < n-m){
			p=((p-s1[i]*h)*d+s1[i+m])%q;
			if(p < 0)
				p+=q;
		}
	}
}

int main(){
	string s1,s2;
	cin >> s1 >> s2;

	search(s1,s2,13);

	return 0;
}

  