#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define pb push_back
#define pp pop_back
#define mp make_pair
#define MOD 1e9+7

string s;
int n,m,x,y;

int ans=0;


void fun(vector<vector<int> > &v,vector<bool> &visited,vector<int> &a,int cn,vector<bool> &visit){

	if(ans == -1){
		return;
	}

	for(auto it=v[cn].begin(); it!=v[cn].end(); it++){
		a[s[*it]-'a']++;
		if(visited[*it] == true){
			ans=-1;
			return;
		}
		else if(ans!=-1){
			ans=max(ans,a[s[*it]-'a']);
		}
		
		visited[*it]=true;
		visit[*it]=true;

		fun(v,visited,a,*it,visit);

		visited[*it]=false;
		a[s[*it]-'a']--;
	}

}


int main(){
	
	cin >> n >> m;
	cin >> s;

	vector<vector<int> > v(n);

	for(int i=0;i<m;i++){
		cin >> x >> y;
		x--;y--;
		v[x].push_back(y);
	}

	

	ans=0;

	vector<bool> visit(n,false);
	for(int i=0;i<n && ans!=-1;i++){
		vector<bool> visited(n,false);
		vector<int> a(26,0);

		a[s[i]-'a']=1;
		visited[i]=true;

		if(visit[i] == false){
			visit[i]=true;

			fun(v,visited,a,i,visit);
		}

	}

	cout << ans << endl;

}