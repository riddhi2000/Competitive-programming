#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define pb push_back
#define pp pop_back
#define mp make_pair
#define MOD 1e9+7

int main(){
	string ss;
	cin >> ss;

	transform(ss.begin(), ss.end(), ss.begin(), ::tolower);

	set<string> s;
	s.insert("danil");
	s.insert("olya");	
	s.insert("slava");	
	s.insert("ann");	
	s.insert("nikita");	
	int c=0;

	string t="";
	for(set<string>::iterator it=s.begin();it!=s.end();it++){
		string t=*it;
		int pos = 0;
		while ((pos = ss.find(t, pos )) != string::npos) {
        	c++;
         	pos += t.length();
        }
	}

	if(c == 1)
		cout << "YES" << endl;
	else
		cout << "NO" << endl;	
}