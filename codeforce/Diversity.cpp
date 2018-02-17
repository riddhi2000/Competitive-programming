#include<bits/stdc++.h>
using namespace std;

int main(){
	string s;
	int k,count=0;
	cin >> s >> k;
	vector<int> v(26,0);

	for(int i=0;i<s.length();i++){
		if(v[s[i]-'a'] == 0){
			count++;v[s[i]-'a']++;
		}
		else
			v[s[i]-'a']++;
	}
	if(count <= k)
		count=k-count;
	else
		count=0;

	if(s.length() < k)
		cout << "impossible" << endl;
	else
		cout << count << endl;
}