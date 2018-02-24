#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define pb push_back
#define pp pop_back
#define mp make_pair
#define MOD 1e9+7

int main(){
	int n;
	cin >> n;

	vector<int> v(n);
	for(int i=0;i<n;i++){
		cin >> v[i];
	}

	string b;
	cin >> b;

	int l=-1000000000,r=1000000000;

	for(int i=4;i<n;i++){
		if(b[i] == '0'){
			if(b[i-1]=='1' && b[i-2]=='1' && b[i-3]=='1' && b[i-4]=='1'){
				for(int j=i;j>=i-4;j--){
					r=min(r,v[j]-1);
				}
			}
		}
		else{
			if(b[i-1]=='0' && b[i-2]=='0' && b[i-3]=='0' && b[i-4]=='0'){
				for(int j=i;j>=i-4;j--){
					//cout << v[j] << endl;
					l=max(l,v[j]+1);
				}
			}
		}
	}

	cout << l << " " << r << endl;	
}