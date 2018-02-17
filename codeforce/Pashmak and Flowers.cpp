#include<bits/stdc++.h>
using namespace std;

int main(){
	int n;
	cin >> n;

	vector<long long> b(n);
	for(int i=0;i<n;i++)
		cin >> b[i];

	sort(b.begin(),b.end());
	long long ma=b[n-1]-b[0];

	long long ways=0;
	map<long long,long long> m;
	for(int i=0;i<n;i++){
		if(m.find(b[i]) != m.end()){
			m[b[i]]++;
		}
		else{
			m[b[i]]=1;
		}
	}

	for(int i=0;i<n;i++){
		if(i > 0 && b[i]==b[i-1])
			continue;
		
		if(m.find(ma+b[i]) != m.end()){
			ways+=(m[b[i]]*m[ma+b[i]]);
		}
	}
	cout << ma << " " << ways << endl;
}