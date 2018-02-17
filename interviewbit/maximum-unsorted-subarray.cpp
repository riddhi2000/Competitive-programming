#include <bits/stdc++.h>

using namespace std;

#define pb push_back

typedef vector<int> vi;

vector<int> subUnsort(vector<int> &A) {
	vi x;

	vi v(A);
	sort(v.begin(),v.end());

	int i=-1,j=-1;

	for (int k = 0; k < A.size(); k++)
	{	
		if(A[k] != v[k] ){
			i=k; break;
		}
	}

	for (int k = A.size()-1;i!=-1 && k>=i; k--)
	{
		if(A[k] != v[k] ){
			j=k; break;
		}
	}

	x.pb(i);
	if(i != -1)
		while(++i <= j)
			x.pb(i);
	return x;
}

vector<int> subUnsort1(vector<int> &A) {
	vi x;

	return x;
}

int main(){

	int a[]={1, 2,3, 4, 5};
	vi A(a,a+sizeof a/sizeof a[0]);
	
	vi x=subUnsort1(A);
	for (int i = 0; i < x.size(); ++i)
	{
		cout << x[i] << " ";
		/* code */
	}
	cout << endl;

	return 0;
}