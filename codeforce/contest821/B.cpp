#include <bits/stdc++.h>
using namespace std;

int main(){
	int m,b,x,y,i,j;
	cin >> m >> b;
	int Y=b;
	int X=m*b;

	long long int count=0,tc=0,last=INT_MAX;
	vector<long long int> v((m*b)+1,0);

	for(x=0;x<=m*b;x++){
		count+=x;
	}

	for(y=1;y<=Y;y++){
		tc=count;
		for(x=(m*(b-y))+1;x<=m*(b-y) && x<last;x++){
			tc-=(y)*
		}
		tc*=(y+1);
		count=max(tc,count);
	}

	cout << count << endl;
	
	return 0;
}

  