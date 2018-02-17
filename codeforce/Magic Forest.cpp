#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define pb push_back
#define pp pop_back
#define mp make_pair
#define MOD 1e9+7

int main(){
	int n,count;
	cin >> n;

	count=0;
	for(int i=1;i<=n;i++){
		for(int j=1;j<=n;j++){

			int k=i^j;
			

			if(k>0 && k<=n && i+j>k && j+k>i && i+k>j){
				//cout << i << "  " << j << " " <<k << endl;
				count++;
			}
		}
	}

	cout << count/6 << endl;

}