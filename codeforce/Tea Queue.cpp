#include<bits/stdc++.h>
using namespace std;

int main(){
	int t,n,m;
	cin >> t;

	while(t--){
		cin >> n;

		m=0;
		vector<int> l(n),r(n);
		for(int i=0;i<n;i++){
			cin >> l[i] >> r[i];
			m=max(m,r[i]);
		}


		vector<int> v;
		vector<int> st(n,0);

		for(int i=1;i<=m;i++){

			for(int j=0;j<n;j++){
				if(i == l[j]){
					v.push_back(j);
				}
			}

			sort(v.rbegin(),v.rend());

			while(!v.empty() && r[v.back()] < i){
				v.pop_back();
			}

			if(!v.empty()){
				st[v.back()]=i;
				v.pop_back();
			}
			

			while(!v.empty() && r[v.back()] == i){
				v.pop_back();
			}

		}

		for(int i=0;i<n;i++){
			cout << st[i] << " ";
		}
		cout << endl;

	}
}