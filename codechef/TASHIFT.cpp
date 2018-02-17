#include <bits/stdc++.h>
using namespace std;

void computelps(vector<int>&lps, string A,int n){
	int i=1,len=0;
	while(i < n){
		if(A[i] == A[len])
			lps[i++]=++len;
		else{
			if(len != 0)
				len=lps[len-1];
			else
				i++;
		}
	}
}

int main(){
	int n,count=0,index=-1;
	string A,B;
	cin >> n >> A >> B;
	vector<int> lps(n,0);
	computelps(lps,A,n);

	B+=B;

	for(int i=0,j=0;i<n;){
		if(A[j] == B[i]){
			i++;j++;
		}
		if(j > count){
			count=j;
			index=i-count;
		}
		if(j == n) j=lps[j-1];
		else if(i<n && A[j] != B[i]){
			if(j != 0) j=lps[j-1];
			else i++;
		}
	}
	cout << index << endl;
	return 0;
}

  