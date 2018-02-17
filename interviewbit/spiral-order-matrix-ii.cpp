#include <bits/stdc++.h>

using namespace std;

void printspiral(vector<vector<int> > v){

	for(int i=0;i<v.size();i++){
		for(int j=0;j<v[i].size();j++){
			cout << v[i][j] << " ";
		}
		cout << endl;
	}
	cout << "--------"<< endl;

}

vector<vector<int> > generateMatrix(int A) {
	int left,right,up,down;
	int n=A*A;

	//int v[3][3];
	vector<vector<int>  > v(A, vector<int>(A));

	int lr=0,lc=A,rc=0,dr=A-1,j=0,ur=A-2;

	for(int k=1;k<=n;){

		for(j=lr;j<lc && k<=n;j++)
			v[lr][j]=k++;
		lr++;j--;lc--;

		int dc=j;	
		for(j=lr;j<=dr && k<=n;j++)
			v[j][dc]=k++;
		dr--;j--;

		int rr=j;
		for(j=dr;j>=rc && k<=n;j--)
			v[rr][j]=k++;
		rc++;j++;


		int uc=j;
		
		for(j=ur;j>=rc && k<=n;j--){
			//cout << uc << ur << j << rc << k << endl;
			v[j][uc]=k++;
		}
		ur--;j++;


	}
	return v;
}

int main(){

	vector<vector<int> > v=generateMatrix(5);



	for(int i=0;i<v.size();i++){
		for(int j=0;j<v[i].size();j++){
			cout << v[i][j] << " ";
		}
		cout << endl;
	}
	
	return 0;
}