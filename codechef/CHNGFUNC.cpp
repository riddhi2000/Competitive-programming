#include <bits/stdc++.h>
using namespace std;

int main(){
	int a,b,count;
	cin >> a >> b;
	count=0;
	
	for(int i=1;i<=a;i++){
		for(int j=1;j<=b;j++){
			long long int x=i*i+j;
			float z= sqrt((float)(x));
			if(z == (int) z)
				count++;
		}
	}

	cout << count << endl;
	return 0;
}