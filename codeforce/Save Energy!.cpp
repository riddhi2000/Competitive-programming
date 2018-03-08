#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define pb push_back
#define pp pop_back
#define mp make_pair
#define MOD 1e9+7

int main(){
	ll d;
	double k,t;
	cin >> k >> d >> t;

	double c=0;
	double ans=0;

	ll time=0;


	if(c+(double)k/t <= 1){
		ans+=k;
		time+=k;
		c+=(double)k/t;
	}
	else{
		double r=1-c;
		ans+=(double)r*t;
		c=1;
	}
	
	if(c < 1.0){

		ll x=time%d;
		if(x > 0){
			ll y=d-x;

			if(c+(double)y/(2*t) <= 1){
				ans+=y;
				time+=y;
				c+=(double)y/(2*t);
			}
			else{
				double r=1-c;
				ans+=r*2*t;
				c=1;
			}
		}
		
	}

	int rr=1/c;

	if(rr > 0){
		c+=(double)(rr-1)*c;
		time+=(rr-1)*time;
		ans+=(rr-1)*ans;
	}
	

	if(c+(double)k/t <= 1){
		ans+=k;
		time+=k;
		c+=(double)k/t;
	}
	else{
		double r=1-c;
		ans+=(double)r*t;
		c=1;
	}
	
	if(c < 1.0){

		ll x=time%d;
		if(x > 0){
			ll y=d-x;

			if(c+(double)y/(2*t) <= 1){
				ans+=y;
				time+=y;
				c+=(double)y/(2*t);
			}
			else{
				double r=1-c;
				ans+=r*2*t;
				c=1;
			}
		}
		
	}


	cout << fixed <<  setprecision(10) << ans << endl;

}