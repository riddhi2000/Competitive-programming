#include <bits/stdc++.h>
using namespace std;

int main(){
	int n;
	cin >> n;

	vector<int> m;
	bool flag=true;

	int a[n][n];
	for(int i=0;i<n;i++)
		for(int j=0;j<n;j++)
			cin >> a[i][j];

	for(int i=0;i<n && flag==true;i++){
		for(int j=0;j<n && flag==true;j++){
			if(a[i][j] == 1)
				continue;
			flag=false;

			for(int k=0;k<n && flag==false;k++){
				for(int l=0;l<n && flag==false;l++){
					if(k==i && l==j)
						continue;
					if(a[i][l]+a[k][j] == a[i][j]){
						flag=true;
						break;
					}
				}
			}

		}
	}

	if(flag == true)
		cout << "Yes" << endl;
	else
		cout << "No" << endl;
	
	return 0;
}

  