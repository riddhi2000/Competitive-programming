#include<bits/stdc++.h>
using namespace std;

int main(){
	int t,n;
	cin >> t;

	while(t--){
		int ans=0;
		cin >> n;

		vector<int> v(2*n);

		for(int i=0;i<2*n;i++){
			cin >> v[i];
		}

		int ci=0;
		for(int i=1;i<=n;i++){

			if(v[ci] != i){
				for(int j=ci+1;j<2*n;j++){
					if(v[j] == i){
						for(;j>ci;j--){
							v[j]=v[j-1];ans++;
						}
					}
				}
				v[ci]=i;
			}
			cout << ans << endl;
			ci++;
			if(v[ci] != i){
				for(int j=ci+1;j<2*n;j++){
					if(v[j] == i){
						for(;j>ci;j--){
							v[j]=v[j-1];ans++;
						}
					}
				}
				v[ci++]=i;
			}
			cout << ans << endl;

			for(int i=0;i<2*n;i++){
				cout <<  v[i] << " ";
			}
			cout << endl;

		}
		cout << ans<< endl;
		
		//vector<vector<int> > v1(n+1,vector<int>(2,-1));

		// for(int i=0;i<2*n;i++){
		// 	cin >> v[i];
		// 	if(v1[v[i]][0] != -1){
		// 		v1[v[i]][0]=i;
		// 	}
		// 	else{
		// 		v1[v[i]][1]=i;
		// 	}
		// }

		// int ci=0,s=0;
		// for(int i=1;i<=n;i++){



		// 	if(v[ci] != i){

		// 	}
		// 	ci++;

		// 	if(v[ci] != i){

		// 	}

		// }
	}
}