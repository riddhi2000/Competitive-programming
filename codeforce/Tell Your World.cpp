#include<bits/stdc++.h>
using namespace std;

int main(){
	int n;
	cin >> n;

	int y[n];
	for(int i=0;i<n;i++)
		cin >> y[i];

	map<int,vector<int> > ma;

	for(int i=1;i<n;i++){
		int m=(y[i]-y[0])/(i+1-1);
		ma[m].push_back(i);
	}


	for(map<int,vector<int> :: iterator it=ma.begin();it!=ma.end();it++){
		vector<int> t=it->second;
		
	}



}