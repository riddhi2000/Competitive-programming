#include<bits/stdc++.h>
using namespace std;


int main(){
	int t,n,l,r;
	cin >> t;

	vector<bool> v(1000004,true);
	v[0]=v[1]=false;

	vector<int> ans;

	for(int i=2;i<=1000000;i++){
		
		if(v[i] == true){
			ans.push_back(i);

			for(int j=i+i;j<=1000000;j+=i){
				v[j]=false;
			}
		}
		
	}

	while(t--){
		cin >> l >> r;

		int x=lower_bound(ans.begin(),ans.end(),l)-ans.begin();
		int y=upper_bound(ans.begin(),ans.end(),r)-ans.begin();

		//cout << x <<  " " << y << endl;

		cout << fixed << setprecision(6) << (double)(y-x)/(double)(r-l+1) << endl;
	}
}