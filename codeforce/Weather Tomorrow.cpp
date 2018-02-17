#include<bits/stdc++.h>
using namespace std;

int main(){
	int n;
	cin >> n;

	vector<int> v(n);
	long long c=0;
	bool f=0;


	for(int i=0;i<n;i++){
		cin >> v[i];
		if(i>1 && v[i]-v[i-1]!=v[i-1]-v[i-2])
			f=1;
	}
	
	if(f==1)
		cout << v[n-1] << endl;
	else
		cout << v[n-1]+v[1]-v[0] << endl;
}