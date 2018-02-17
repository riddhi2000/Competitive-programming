#include<bits/stdc++.h>
using namespace std;

int main(){
	int t,n;
	
	cin >> n;

	vector<int> v(n);
	for(int i=0;i<n;i++){
		cin >> v[i];
	}

	vector<bool> visit(n,false);

	vector<vector<int> > ans;

	for(int i=0;i<n;i++){

		if(visit[i] == false){
			vector<int> ans1;
			int j=i;
			
			while(visit[j] != true){
				visit[j]=true;
				//cout << j << " " << v[j] << endl;
				ans1.push_back(j+1);
				j=v[j]-1;
			}
			ans1.push_back(j+1);
			
			ans.push_back(ans1);	
		}
	}
	cout << ans.size() << endl;
	for(int i=0;i<ans.size();i++){
		for(int j=0;j<ans[i].size();j++){
			cout << ans[i][j] << " ";
		}
		cout << endl;
	}
	
}