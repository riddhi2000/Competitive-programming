#include<bits/stdc++.h>
using namespace std;

int main(){
	int n,i,j,p,q,k;
	cin >> n;
	int a[n],b[n],c[n+1];
	
	for(i=0;i<n;i++){
		cin >> a[i];
		c[i]=0;
	}
	c[n]=0;

	for(i=0;i<n;i++)	
		cin >> b[i];


	for(i=0;i<n;i++){
		if(c[a[i]] == 0){
			c[a[i]]=i+1;
		}
		else{
			p=c[a[i]]-1;
			q=i;
		}
	}

	for(k=1;k<=n;k++){
		if(c[k] == 0)
			break;
	}

	if(a[p] != b[p] && (b[q] == a[p]) )
		a[p]=k;
	else
		a[q]=k;

	for(i=0;i<n;i++)
		cout << a[i] << " ";
	cout << endl;


	return 0;
}