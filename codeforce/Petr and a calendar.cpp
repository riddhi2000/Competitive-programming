#include<bits/stdc++.h>
using namespace std;

int main(){
	int m,d;
	cin >> m >> d;

	int c=1;
	int td=0;

	int arr[]={31,28,31,30,31,30,31,31,30,31,30,31,30,31};
	
	td=arr[m-1];
	
	td-=7-d+1;
	while(td > 0){
		td-=7;
		c++;
	}

	cout << c << endl;

}