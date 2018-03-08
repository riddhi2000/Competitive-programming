#include<bits/stdc++.h>
using namespace std;

int main(){
	int t,n;
	cin >> t;

	while(t--){
		int n,u,d;
		cin >> n >> u >> d;

		vector<int> h(n);
		for(int i=0;i<n;i++){
			cin >> h[i];
		}

		int i,p=0;
		for(i=1;i<n;i++){

			if(h[i] == h[i-1]){
				continue;
			}
			else if(h[i]>h[i-1]){
				if(h[i]-h[i-1]>u){
					break;
				}
			}
			else{
				if(h[i-1]-h[i] > d){
					if(p == 0){
						p=1;
					}
					else{
						break;
					}
				}
			}
		}

		cout << i << endl;
	}
}