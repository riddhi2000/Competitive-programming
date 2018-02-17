#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define pb push_back
#define pp pop_back
#define mp make_pair
#define MOD 1e9+7

void dfs(int &wn,int cn,int cs,vector<int> &v){
	if(cn+cs == wn){
		v.push_back(cn);
		return;
	}
	if(cn > wn)
		return;

	for(int i=0;i<=9;i++){
		int tcn=cn*10+i;
		int tcs=cs+i;
		if(tcn+tcs <= wn && tcn!=0){
			dfs(wn,tcn,tcs,v);
		}
	}
}

int main(){
	int n;
	cin >> n;

	vector<int> v;
	for(int i=1;i<=81;i++){
		int j=n-i;
		int num=j,sum=0;

	    while (num > 0){
	        int digit = num % 10;
	        sum  = sum + digit;
	        num /= 10;
	        if(sum > i)
	        	break;
	    }
	    if(sum == i){
	    	v.push_back(j);
	    }
	}
	
	cout << v.size() << endl;
	if(v.size() > 0){
		for(int i=v.size()-1;i>=0;i--){
			cout << v[i] << endl;
		}	
	}
	
}