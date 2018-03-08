#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define pb push_back
#define pp pop_back
#define mp make_pair
#define MOD 1e9+7

int main(){
	int n,m,k;
	cin >> n >> m >> k;

	string time[n];
	for(int i=0;i<n;i++){
		cin >> time[i];
	}


	for(int i=0;i<k;i++){
		int ai=0,aj=0;

		int d=-1;

		for(int i=0;i<n;i++){
			int j=0;
			while(j<m && time[i][j]!='1'){
				j++;
			}

			if(j >= m){
				continue;
			}

			int sj=j+1;
			while(sj<m && time[i][sj]!='1'){
				sj++;
			}

			if(sj >= m){
				sj=j;
			}

			if(sj<m && (d==-1 || sj-j > d)){
				ai=i;aj=j;d=sj-j;
			}
			//cout << j << " " << sj << " " << d << endl;

			j=sj+1;
			while(j<m && time[i][j]!='1'){
				j++;
			}

			if(j >= m){
				continue;
			}

			sj=j+1;
			while(sj<m  && time[i][sj]!='1'){
				sj++;
			}

			if(sj >= m){
				sj=j;
			}

			int tj=sj+1;
			while(tj<m){
				if(time[i][tj] == '1'){
					j=sj;sj=tj;
				}
				tj++;
			}

			if(sj<m && sj-j > d){
				ai=i;aj=sj;d=sj-j;
			}

		}
		//cout << ai << " " << aj << endl;
		time[ai][aj]='0';


		// cout << "****print*****" << endl;
		// for(int p=0;p<n;p++){
		// 	for(int q=0;q<m;q++)
		// 		cout << time[p][q] << " ";
		// 	cout << endl;
		// }

	}

	ll ans=0;
	for(int i=0;i<n;i++){

		int j=0;

		while(j<m && time[i][j]=='0'){
			j++;
		}

		int fj=j,lj=j;
		while(j<m){

			if(time[i][j] == '1'){
				lj=j;
			}

			j++;
		}

		//cout << fj << " " << lj << endl;

		if(lj < m)
			ans+=lj-fj+1;

	}

	cout << ans << endl;

}

