#include<bits/stdc++.h>
using namespace std;

int main(){
	double r,d,n;
	cin >> r >> d >> n;

	double x,y,sr;
	int count=0;

	r-=d;

	for(int i=0;i<n;i++){
		cin >> x >> y >> sr;

		double a=sqrt(x*x+y*y)+sr;
		if(r >= a){
			count++;
		}
	}

	cout << count << endl;

}