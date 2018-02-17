#include<bits/stdc++.h>
using namespace std;

bool isSubset(vector<int> a,vector<int> b){
	int count=0;
	for(int i=0;i<26;i++){
		if(b[i]>0 && a[i]==0)
			return false;
		if(a[i]>0 && b[i]==0)
			count++;
	}
    if(count > 0)
    	return true;
    else
    	return false;
}

int main(){
	int T;
	cin >> T;

	while(T--){
		string s,t;
		cin >> s >> t;
		
		vector<int> a(26,0);
		vector<int> b(26,0);

		for(int i=0;i<s.length();i++){
			a[s[i]-'a']++;
			b[t[i]-'a']++;
		}
		bool f=0;

		if(isSubset(a,b) )
			f=1;

		for(int i=0;i<26;i++){
			if(b[i]==0 && a[i]>=2){
				f=1;break;
			}
		}
		bool flag=false;
		
		if(f == 0)
			cout << "B" << endl;
		else
			cout << "A" << endl;

	}
}