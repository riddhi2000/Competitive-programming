#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define pb push_back
#define pp pop_back
#define mp make_pair
#define MOD 1e9+7

map<int,set<char> > adj;
vector< vector<char> > comp;
std::vector<char> cur;
map<int,int> visit;


void dfs(char c){
	visit[c]=true;
	cur.pb(c);

	for(char d : adj[c]){
		if(!visit[d]){
			dfs(d);
		}
	}
}

int main(){
	int n;
	cin >> n;

	string s,t;
	cin >> s >> t;

	for(int i=0;i<n;i++){

		if(s[i] != t[i]){
			adj[s[i]].insert(t[i]);
			adj[t[i]].insert(s[i]);
		}
	}

	for(int i='a';i<='z';i++){
		if(!visit[i]){
			cur.clear();
			dfs(i);
			comp.pb(cur);
		}
	}

	vector<pair<char,char> > ans;

	for( auto c : comp){
		for(int i=0;i<c.size()-1;i++){
			ans.pb({c[i],c[i+1]});
		}
	}

	cout << ans.size() << endl;

	for(auto pr : ans){
		cout << pr.first << " " << pr.second << endl;
	}

}