#include <bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin >> t;

	while(t--){
		int n,x,temp;
		cin >> n >> x;

		vector<vector<int> > p;
		for(int i=1;i<n;i++){
			cin >> temp;
			p[temp].push_back(i);
		}

		int c[n];
		for(int i=0;i<n;i++)
			cin >> c[i];

		int k[n];
		for(int i=0;i<n;i++)
			cin >> k[i];

		for(int i=0;i<n;i++){
			map<int,int> m;
			vector<bool> visited(n,false);
			visited[i]=true;
			stack<int> s;
			s.push(i);

			while(!s.empty()){
				int u=s.top();
				s.pop();
				for(int j=p[u].begin();j!=p[u].end();j++){
					if(visited[j]==false ){
						s.push(j);
						if(k[i] > k[j] && c[j]==c[i] ){
							if(m.count(k[j]) > 0)
								m[k[j]]++;
							else
								m[k[j]]=1;
						}
					}
					visited[j]=true;
				}
			}

		}
	}

	return 0;
}

  