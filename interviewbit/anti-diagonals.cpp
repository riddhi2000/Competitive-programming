#include <bits/stdc++.h>

using namespace std;

//for vectors
#define pb push_back
typedef vector<int> vi; 
typedef vector<vi> vvi;

vector<vector<int> > diagonal(vector<vector<int> > &A) {
	vvi v(2*(A.size()-1)+1);

	cout << v.size() << endl;

	for(int i=0;i<A.size();i++){
		for (int j = 0; j < A[i].size(); j++)
		{
			v[i+j].pb(A[i][j]);
			cout << i << j << endl;
		}
	}

	return v;

}

int main(){
	int a[][3]={	{1, 2, 3},	
				{4, 5, 6},
				{7, 8, 9}
			};
	vvi x(3);
	x[0].pb(1);
	x[0].pb(2);
	x[0].pb(3);

	x[1].pb(4);
	x[1].pb(5);
	x[1].pb(6);

	x[2].pb(7);
	x[2].pb(8);
	x[2].pb(9);

	vvi t=diagonal(x);

	for (int i = 0; i < t.size(); ++i)
	{
		/* code */
		for (int j = 0; j < t[i].size(); ++j)
		{
			/* code */
			cout << t[i][j] << " " ;
		}
		cout << endl;
	}

	
	return 0;
}