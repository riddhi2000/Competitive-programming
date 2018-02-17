#include<bits/stdc++.h>
using namespace std;

int main(){
	int n,q,type;
	long long int index,k,l,r,x;
	cin >> n >> q;
	long long int a[n];

	for(int i=0;i<n;i++)
		cin >> a[i];
    
	while(q--){
		cin >> type;

		if(type == 1){
			cin >> index >> k;
			index--;
			while(k>0 && index<n-1){
				k--;
				int j=index;j++;
				while(j<n-1 && a[j]<=a[index])
					j++;
				if((a[j]>a[index]) && ((j-index) <= 100) )
					index=j;
				else
					break;
			}
			cout << index+1 << endl;
		}
		else if(type == 2){
			cin >> l >> r >> x;
			l--;r--;
			for(int i=l;i<=r;i++){
				a[i]+=x;
			}
		}

	}
}