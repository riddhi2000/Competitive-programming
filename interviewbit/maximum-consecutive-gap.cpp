#include <bits/stdc++.h>

using namespace std;

#define pb push_back
#define mp make_pair

typedef vector<int> vi; 
typedef pair<int,int> ii;
typedef vector<ii> vii;

int maximumGap(const vector<int> &A) {
	int mine=A[0],maxe=A[0];
	int n=A.size();

	for (int i = 0; i < n; ++i){
		if(A[i] > maxe) 
			maxe=A[i];
		if(A[i] < mine)
			mine=A[i];
	}

	int gap=(maxe-mine)/(n-1);
	vii arr(n);


	for (int i = 0; i < n; ++i){
		int x=A[i]-mine/(n-1);
		if(arr[x].first > A[i])
			arr[x].first=A[i];

		if(arr[x].second < A[i])
			arr[x].second=A[i];

	}
	int maxgap=0;

	for (int i = 1; i < n; ++i){
		maxgap=max(maxgap,arr[i].second-arr[i-1].first);
	}
	return maxgap;
}

int main(){

	int a[]={1,10,5};
	vi A(a,a+sizeof a/sizeof a[0]);

	cout << maximumGap(A) << endl;
	
	return 0;
}