#include <bits/stdc++.h>

using namespace std;

typedef vector<int> vi;

int repeatedNumber(const vector<int> &A) {
	set<int> x;

	for (int i = 0; i < A.size(); ++i){
		if(x.find(A[i]) == x.end())
			x.insert(A[i]);
		else
			return A[i];
	}
	return -1;
}

int repeatedNumber1(const vector<int> &A) {
	int n=A.size();
	int sqn=sqrt(n);
	int sqrtArr[sqn];

	for (int i = 0; i < sqn; ++i){
		sqrtArr[i]=0;
	}

	for (int i = 0; i < n; ++i){
		int x=sqrt(A[i]);
		
	}
}


int main(){

	int a[]={3,4,1,4,1};
	vi A(a,a+sizeof a/sizeof a[0]);

	cout << repeatedNumber1(A) << endl;
	
	return 0;
}