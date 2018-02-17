#include <bits/stdc++.h>

using namespace std;

void print(vector<vector<int> > v){

	for(int i=0;i<v.size();i++){
		for(int j=0;j<v[i].size();j++){
			cout << v[i][j] << " ";
		}
		cout << endl;
	}

}

vector<vector<int> > generate(int A) {

	vector<vector<int> > v;
	if(A == 0)
		return v;

	vector<int> x;
	x.push_back(1);
	v.push_back(x);
	

	for(int i=1;i<A;i++){
		vector<int> x;
		x.push_back(1);

		for(int j=1;j<i;j++){
			x.push_back(v[i-1][j]+v[i-1][j-1]);
		}
		x.push_back(1);
		v.push_back(x);

	}
	return v;

}
 
int main(){

	vector<vector<int> > v=generate(2);
	print(v);

	return 0;
}