#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define pb push_back
#define pp pop_back
#define mp make_pair
#define MOD 1e9+7

int main(){
	double r,x1,y1,x2,y2;
	cin >> r >> x1 >> y1 >> x2 >> y2;

	double R;

	R=sqrt((x1-x2)*(x1-x2)+(y1-y2)*(y1-y2));

	if(x1 == x2 && y1 == y2) {
    cout << x1 << " " << (y1 + (r / 2.0)) << " " << (r / 2.0) << endl;
    } 
	else if(R >= r){
		cout << fixed << setprecision(16) << x1 << endl;
		cout << fixed << setprecision(16) << y1 << endl;
		cout << fixed << setprecision(16) << r << endl;

	}
	else{
		double AR=(R+r)/2;
		double x=x2+(AR/R)*(x1-x2);
		double y=y2+(AR/R)*(y1-y2);

		cout << fixed << setprecision(16) << x << endl;
		cout << fixed << setprecision(16) << y << endl;
		cout << fixed << setprecision(16) << AR << endl;
	}
	
	

}