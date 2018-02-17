#include <bits/stdc++.h>

using namespace std;

int findUnsortedSubarray(vector<int>& a) {
	int n=a.size();

	int i,j,k,l;

	if(n==1)
		return 0;

	for(i=1;i<n;i++){
		if(a[i] < a[i-1])
			break;
	}
	
	if(i == n)
	    return 0;

	j=i-1;
	while(a[j] > a[i])
	    j--;
	    
	j++;

	for(l=n-2;l>=0;l--){
		if(a[l] > a[l+1])
			break;
	}

	for(k=l+1;k<n;k++){
		if(a[l] <= a[k])
			break;
	}
	k--;

	cout << k << "	" << j << endl;
	

	return k-j+1;    
}

int main(){

	int A[]={1,3,5,4,2};
	vector<int> a(A,A+sizeof A/sizeof A[0]);

	for(int i=0;i<a.size();i++)
		cout << a[i] <<"	";
	cout << endl;


	cout << "answer:" << findUnsortedSubarray(a) << endl;
	
	return 0;
}