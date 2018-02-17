#include<bits/stdc++.h>
using namespace std;

int main(){
	double t,n;
	cin >> t;

	while(t--){
		cin >> n;
		
		vector<int> v(n);
		for(int i=0;i<n;i++)
			cin >> v[i];

		sort(v.begin(),v.end());

		int i=n-3;
		double c,p;


		while(i>=0 && v[i]==v[i+1]){
			i--;
		}
		

		if(v[n-1]==v[n-2]){
			if(i<0)
				c=n;
			else
				c=n-i-1;
			//cout << c  << " "  << n << endl;
			p=(c*(c-1))/(n*(n-1));
		}
		else{
			if(i<0)
				c=n-1;
			else
				c=n-i-2;
			p=c/(n*(n-1)/2);
		}
		cout << fixed << setprecision(8);
		cout << p << endl;
	}
}