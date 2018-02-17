#include <bits/stdc++.h>

using namespace std;

typedef vector<int> vi;

int maximumGap(const vi &A) {
	int count=-1;
	
	for (int i = 0; i < A.size(); i++){

		for (int j=A.size()-1;j>i && j-i>count;j--){

			if(A[j] >= A[i]){
				count =max(count,j-i);
				break;
			}
		}
	}
	return count;
}


int main(){

	int a[]={1,2,3,4,5,6,7,8,9,10};
	vi A(a,a+ sizeof a/sizeof a[0]);
	cout << maximumGap(A) << endl;
	
	return 0;
}