#include<bits/stdc++.h>
using namespace std;

int main(){
	long long t,n,d,y;
	cin >> t;

	while(t--){
		cin >> n >> d;
		vector<long long> a(n);

		for(int i=0;i<n;i++)
			cin >> a[i];

		vector<vector<long long> > x(d,vector<long long>(2));
		for(int i=0;i<n;i++){
			y=i%d;
			x[y][0]+=a[i];
			x[y][1]++;
		}
		bool f=true;
		for(int i=0;i<d;i++){
			if(x[i][0]%x[i][1]==0)
				continue;
			else{
				f=false;
				break;
			}
		}
		if(f == true){
			y=x[0][0]/x[0][1];
			for(int i=1;i<d;i++){
				if(x[i][0]/x[i][1] != y){
					f=false;break;
				}
			}
		}
		
		if(f == false)
			cout << "-1" << endl;
		else if(f == true){
			long long ans1=0;
			for(int i=0;i<d;i++){
				for(int j=i;j<n;j+=d){
					if(a[j] > y){
						a[j+d]+=(a[j]-y);
						ans1+=(a[j]-y);
					}
					else if(a[j] < y){
						a[j+d] -= (y-a[j]);
						ans1 += (y-a[j]);
					}
				}
			}
			cout << ans1 << endl;
		}	
	}
}