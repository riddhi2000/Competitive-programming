#include<bits/stdc++.h>
using namespace std;


bool f(vector<int> v,int j,int n,int l){
	
	l=l+1;
	if((n-j)%2!=0 && v[j]%2!=0 && v[n-1]%2!=0){
		if(l%2 != 0)
			return true;
	}

	for(int i=j;i<n;i+=2){
		if(v[i]%2 != 0){
			bool flag=f(v,i+1,n,l);
			if(flag == true)
				return true;
		}
	}
	return false;
}

int main(){
	int n;
	cin >> n;
	vector<int> v(n);

	bool flag=false;

	for(int i=0;i<n;i++){
		cin >> v[i];
	}
	
	if(f(v,0,n,0))
		cout << "Yes" << endl;
	else
		cout << "No" << endl;
}