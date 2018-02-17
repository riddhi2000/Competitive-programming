#include<bits/stdc++.h>
using namespace std;

int main(){
	int t,n;
	cin >> t;

	while(t--){
		string s;
		cin >> s;

		map<char,int> m;
		vector<vector<int> > v(26);

		for(int i=0;i<s.length();i++){
			m[s[i]]++;
			v[s[i]-'a'].push_back(i+1);
		}

		int c=0;char ch;
		for(auto it=m.begin();it!=m.end();it++){
			if(it->second%2 != 0){
				c++;ch=it->first;
			}
		}

		if(c > 1){
			cout << "-1" << endl;
		}
		else{
			vector<int> ans(s.length(),-1);

			int i=0,j=s.length()-1;

			for(int k=0;k<26;k++){
				int h=v[k].size()/2;
				int cc=0;
				while(cc < h){
					ans[i++]=v[k].back();
					v[k].pop_back();cc++;
				}
				cc=0;
				while(cc < h){
					ans[j--]=v[k].back();
					v[k].pop_back();cc++;
				}
			}
			if(s.length()%2 != 0){
				ans[i]=v[ch-'a'].back();
			}

			for(int i=0;i<ans.size();i++){
				cout << ans[i] << " ";
			}
			cout << endl;
		}
	}
}