#include<bits/stdc++.h>
using namespace std;

int main(){
	int t,k,a,b;
	cin >> t;

	while(t--){
		cin >> k >> a >> b;
		double d=360/k;
		int count=0;
		double x=a*d;
		double y=b*d;
		if(x < y)
			swap(x,y);
		for(int i=1;i<=k;i++){
			if(i!=a && i!=b){
				double z=i*d;
				if(z>x && z<y){
					double p=(180-abs(z-x))/2;
					double q=(180-abs(y-x))/2;

					if(p+q > 90 && p+q<180)
						count++;
				}
				else{
					
				}	
			}
		}
		cout << count << endl;
	}
}