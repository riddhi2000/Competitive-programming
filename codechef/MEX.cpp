#include<bits/stdc++.h>
using namespace std;

int main(){
	int t,n,k,x;
	cin >> t;

	while(t--){
		cin >> n >> k;

		vector<int> v(200009,0);
		for(int i=0;i<n;i++){
			cin >> x;
			v[x]=1;
		}

		int i=0,j=0;
		for(i=0,j=0;i<k;j++){
			if(v[j] == 0){
				v[j]=1;
				i++;
			}
		}
		while(v[i]==1){
			i++;
		}

		cout << i << endl;
	}
}