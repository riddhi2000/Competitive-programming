#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define pb push_back
#define pp pop_back
#define mp make_pair
#define MOD 1e9+7


int constructSTUtil(int arr[], int ss, int se, int *st, int si){
	if(ss == se){
		st[si]=arr[ss];
		return st[si];
	}

	int mid=(se+ss)/2;
	st[si]=constructSTUtil(arr, ss, mid, st, si*2+1)+constructSTUtil(arr, mid+1, se, st, si*2+2);
	return st[si];
}

int* constructST(int arr[], int n){
	
	int x=(int)ceil(log2(n));
	int max_size=2*(int)pow(2,x)-1;
	int *st=new int[max_size];
	constructSTUtil(arr, 0, n-1, st, 0);
	return st;

}



int getSum(int *st, int ss, int se, int qs, int qe, int si){
	if(qs<=ss && qe>=se)
		return  st[si];

	if(se<qs || ss>qe)
		return 0;

	int mid=(se+ss)/2;
	return getSum(st, ss, mid, qs, qe, 2*si+1)+getSum(st, mid+1, se, qs, qe, 2*si+2);
}

int main(){
	int n,m,l,r;
	cin >> n;

	int a[n];
	for(int i=0;i<n;i++)
		cin >> a[i];

	int *st=constructST(a, n);

	cin >> m;
	for(int i=0;i<m;i++){
		cin >> l >> r;
		cout << getSum(st, 0, n-1, l-1, r-1, 0) << endl;
	}

}