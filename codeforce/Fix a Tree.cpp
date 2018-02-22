#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define pb push_back
#define pp pop_back
#define mp make_pair
#define MOD 1e9+7

vector<int> ans;

void dfs(int i,vector<int> &vis, vector<int> &p){
	vis[i]=true;
	if(vis[p[i]] == false){
		dfs(p[i],vis,p);
	}
	else{
		ans.pb(i);
	}
}

int main(){
	
	int t,n,m,i,j,pos=-1,ans=0;
	cin >> n;
	vector<int> a(n+1);
        
	for(i=1;i<=n;i++){
        cin >> a[i];

        if(a[i]==i)
            pos=i;
    }
    j=0;

    vector<int> vis(n+1,0);

    for(i=1;i<=n;i++){

        if(vis[i]!=0)
            continue;

        int u=i;
        j++;
        vis[u]=j;

        while(vis[ a[u] ]==0){
            u=a[u];
            vis[u]=j;
        }

        if(vis[ a[u] ]==j){
            if(pos==-1)
                pos=u;
            if(a[u]!=pos){
                ans++;
                a[u]=pos;
            }
        }
    }

	cout << ans << endl;

	for(int i=1;i<=n;i++){
		cout << a[i] << " ";
	}
	cout << endl;



}