#include <bits/stdc++.h>

using namespace std;

int main(){
	int t,n,k,len,x,count;
	cin >> t;

	while(t--){
		cin >> n >> k;
		
		int arr[n][k+1];

		for(int i=0;i<n;i++)
			for(int j=1;j<=k;j++)
				arr[i][j]=0;


		for(int i=0;i<n;i++){
			cin >> len;
			for(int j=0;j<len;j++){
				cin >> x;
				if(x <= k)
					arr[i][x]=1;
			}
		}

		count=0;

		for(int i=0;i<n-1;i++){
			for(int j=i+1;j<n;j++){
				int l;
				for(l=1;l<=k;l++){
					if(arr[i][l]==0 && arr[j][l]==0)
						break;
				}
				if(l == k+1)
					count++;
			}
		}

		cout << count << endl;

	}

	return 0;
}