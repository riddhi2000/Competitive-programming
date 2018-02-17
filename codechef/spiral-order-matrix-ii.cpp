#include <bits/stdc++.h>

using namespace std;

vector<vector<int> > generateMatrix(int A) {
	int left,right,up,down;
	int n=A*A;

	//int v[3][3];
	vector<vector<int> > v(A, vector<int>(A));

	int lr=0,lc=A,dr=A,rc=0,dr=A-1,uc=0,j=0,ur=A-2;

	for(int k=1;k<=n;){

		for(;j<lc;j++)
			v[lr][j]=k++;
		lr++;j--;lc--;

		dc=j;
		for(j=lr;j<dr;j++)
			v[j][dc]=k++;
		dr--;j--;

		rr=j;
		for(j=dr;j>=rc;j--)
			v[rr][j]=k++;
		rc++;j++;

		uc=j;
		for(j=ur;j<=rc;j--)
			v[j][uc]=k++;
		ur--;j++;

	}
	return v;
}

int main(){

	vector<vector<int>> v=generateMatrix(3);

	for(int i=0;i<v.size();i++){
		for(int j=0;j<v[i].size();j++){
			cout << v[i][j] << " ";
		}
		cout << endl;
	}
	
	return 0;
}