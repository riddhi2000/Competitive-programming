#include<bits/stdc++.h>
using namespace std;

int main(){
	int t,l,r;
	cin >> t;

	vector<bool> arr(1000001,true);
	vector<int> v(1000001,0);

	arr[1]=false;
	for(int i=2;i<=1000;i++){
		if(arr[i]){
			for(int j=i+i;j<=1000000;j+=i)
				arr[j]=false;
		}
	}

	for(int i=1;i<=1000000;i++){
		v[i]=v[i-1];
		if(arr[i])
			v[i]++;
	}


	while(t--){
		cin >> l >> r;
		//cout << v[l] << v[r] << endl;
		cout << v[r]-v[l-1] << endl;
	}

}