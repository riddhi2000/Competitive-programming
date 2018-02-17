#include <bits/stdc++.h>

using namespace std;

//for vectors
#define pb push_back
typedef vector<int> vi; 
typedef vector<vi> vvi;


int solve(vector<int> &A) {

	sort(A.begin(),A.end());

	for (int i = 0; i < A.size(); ++i){
		/* code */
		int j=i+1;
		while(j<A.size() && A[j] == A[i])
		    j++;
		if(A[i] == A.size()-(j) ){
			//cout << A[i] ;
			return 1;
		}

	}
	return -1;
}


int main(){

	int a[]={-4,-2,0,-1,-6};
	vi A(a,a+5);

	cout << solve(A) << endl;
	
	return 0;
}