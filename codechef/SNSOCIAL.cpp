#include <bits/stdc++.h>

using namespace std;

int row[]={1,-1,0,0,1,1,-1,-1};
int col[]={0,0,1,-1,1,-1,1,-1};

int main(){
	int t,n,m;
	cin >> t;
	
	while(t--){

		int count1=0;
		int maxvalue=INT_MIN;
		
		cin >> n >> m;
		int a[n][m];
		int table[n][m];
		map <int,int> minvalue;

		for(int i=0;i<n;i++){
			for(int j=0;j<m;j++){
				cin >> a[i][j];
				table[i][j]=INT_MAX;
				if(a[i][j] > maxvalue){
					maxvalue=a[i][j];
				}
			}
		}

		for(int i=0;i<n;i++){
			for(int j=0;j<m;j++){
				if(a[i][j] == maxvalue)
					table[i][j]=0;
				else{
					for(int k=0;k<8;k++){
						int x=i+row[k];
						int y=j+col[k];

						if(x>=0 && x<n && y>=0 && y<m && table[x][y]!=INT_MAX && table[x][y]+1<table[i][j]){
							table[i][j]=table[x][y]+1;
						}
					}
				}	
			}

			
		}

		for(int i=n-1;i>=0;i--){
			for(int j=m-1;j>=0;j--){
				if(a[i][j] == maxvalue)
					table[i][j]=0;
				else{
					for(int k=0;k<8;k++){
						int x=i+row[k];
						int y=j+col[k];

						if(x>=0 && x<n && y>=0 && y<m && table[x][y]!=INT_MAX &&   table[x][y]+1<table[i][j]){
							table[i][j]=table[x][y]+1;
						}
					}
				}
			}
		}

		// cout << "--------------------------------" << endl;
		// 		for(int i=0;i<n;i++){
		// 		for(int j=0;j<m;j++){
		// 			cout << table[i][j] << " ";
		// 		}
		// 		cout << endl;
		// 		}

		for(int i=0;i<n;i++){
			for(int j=0;j<m;j++){
					if(table[i][j] > count1 )
						count1=table[i][j];
			}
		}

		// for(int i=0;i<n;i++){
		// 	for(int j=0;j<m;j++){
		// 		if(a[i][j] != maxvalue)
		// 			if(minvalue.count(table[i][j]) > 0){
		// 				minvalue[table[i][j]]=min(minvalue[table[i][j]],a[i][j]);
		// 			}
		// 			else
		// 				minvalue[table[i][j]]=a[i][j];
		// 	}
		// }
		

		// for (auto& kv : minvalue) {
		// 	//cout << kv.first << " " <<  kv.second << endl;
		// 	if(kv.second > count1)
		// 		count1=kv.second;
		// }

		cout << count1 << endl;
		
	}
	
	return 0;
}