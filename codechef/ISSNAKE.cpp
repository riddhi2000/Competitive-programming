#include <bits/stdc++.h>

using namespace std;

int main(){
	int t,n,i,j,x,y,c;
	cin >> t;

	while(t--){
		cin >> n;
		char a[2][n];
		char b[2][n];

		int count=0;
		c=0;

		for (i = 0; i < 2; ++i){
			for (j = 0; j<n; ++j){
				cin >> b[i][j];
				if(b[i][j] == '#')
					count++;
			}
		}


		for(x=0;x<n;x++){
			for (y = 0; y < 2; ++y){
				c=0;
				if(b[y][x] == '#'){
					//cout << "position: " << y << " "<< x << endl;

					for (i = 0; i < 2; ++i){
						for (j = 0; j<n; ++j){
							a[i][j]=b[i][j];
						}
					}
					a[y][x]='.';

					c=1;
					i=y;j=x;

					while(true){
						//cout <<  "before" << i << " " << j << endl;
						if(i+1<=1 && a[i+1][j] == '#'){
							i++;
							a[i][j]='.';
							c++;
						}
						else if(i-1>=0 && a[i-1][j] == '#'){
							i--;
							a[i][j]='.';
							c++;
						}
						else if(j+1<n && a[i][j+1] == '#'){
							j++;
							a[i][j]='.';
							c++;
						}
						else if(j-1>=0 && a[i][j-1] == '#'){
							j--;
							a[i][j]='.';
							c++;
						}
						else{
							break;
						}
						//cout <<  "after" << i << " " << j << endl;
					}	
				}
				if(c == count)
					break;
			}
			if(c == count)
					break;
		}
		
		
		if(c == count)
			cout << "yes" << endl;
		else
			cout << "no" << endl;

	}
	
	return 0;
}