#include <bits/stdc++.h>
using namespace std;

bool isAvailable(int row,int col,char v,vector<vector<char> > &A){
	for(int i=0;i<A[0].size();i++){
		if(A[row][i]==v || A[i][col]==v)
			return false;
	}
	int sr,sc;
	if(row < 3)
		sr=0;
	else if(row < 6)
		sr=3;
	else
		sr=6;

	if(col < 3)
		sc=0;
	else if(row < 6)
		sc=3;
	else
		sc=6;

	for(int i=sr;i<sr+3;i++){
		for(int j=sc;j<sc+3;j++){
			if(A[i][j]==v)
				return false;
		}
	}

	return true;
}

void F(vector<vector<char> > &A,int i,int j){
	if(i==A.size()){
		return;
	}
	if(A[i][j] == '.')
		for(int v=1;v<=9;v++){
			if(isAvailable(i,j,(char)v,A)){
				A[i][j]=(char)v;
				if(j < A[0].size()-1){
					j++;
				}
				else{
					i++;j=0;
				}
				F(A,i+1,j+1);
				A[i][j]='.';
			}
		}
	else{
		if(j < A[0].size()-1){
			j++;
		}
		else{
			i++;j=0;
		}
		F(A,i+1,j+1);
	}

}

void solveSudoku(vector<vector<char> > &A) {
	F(A,0,0);
	return ;
}

int main(){

	// vector<vector<char> > v=({"53..7...."}, {"6..195..."}, {".98....6."}, {"8...6...3"}, {"4..8.3..1"}, {"7...2...6"}, {".6....28."}, {"...419..5"}, {"....8..79"});
	
	// for(int i=0;i<v.size();i++){
	// 	for(int j=0;j<v[i].size();j++){
	// 		cout << v[i][j] << " ";
	// 	}
	// 	cout << endl;
	// }

	return 0;
}