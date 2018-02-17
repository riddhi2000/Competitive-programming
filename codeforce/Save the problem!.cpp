#include<bits/stdc++.h>
using namespace std;

int main(){
	int A;
	cin >> A;

	int table[1000001];
	table[0]=1;

	int c=1,j;
	while(true){
		for(j=c;j<=1000000;j++){
			table[j]+=table[j-c];
			if(table[j] == A){
				break;
			}
		}
		if(table[j] == A){
			break;
		}
		c+=2;
	}

	cout << j << " " << c << endl;
	for(int i=1;i<=c;i++)
		cout << i << " ";
	cout << endl;	
}