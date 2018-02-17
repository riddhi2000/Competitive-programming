#include<bits/stdc++.h>
using namespace std;

int main(){
	int t,n;
	cin >> t;
	double x[3],y[3],z[3];
	

	for(int i=1;i<=t;i++){
		cin >> x[0] >> y[0] >> z[0];
		cin >> x[1] >> y[1] >> z[1];
		cin >> x[2] >> y[2] >> z[2];
		vector<double> v;
		v.push_back(x[0]);
		v.push_back(x[1]);
		v.push_back(x[2]);

		sort(v.begin(),v.end());

		double md=abs(v[2]-v[0]);
		double q=6;

		printf("Case #%d: %.15f\n",i, md/q);
		//cout << "Case #" << i << ": " << md << endl;
		
	}
}