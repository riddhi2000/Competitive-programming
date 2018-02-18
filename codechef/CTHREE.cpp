#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define pb push_back

int main(){
	ll t,n,a,b,c;
	cin >> t;

	while(t--){
		cin >> n >> a >> b >> c;

		long long count=0;

		set<pair<int,pair<int,int> > > s;

		for(int i=1;i<=sqrt(n+1);i++){

			if(n%i == 0){

				ll n1=n/i,n2=i;

				if(n1<=a || n2<=a){

					for(int j=1;j<=sqrt(max(n1+1,n2+1));j++){

						if(n2<=a && n1%j == 0){
							if(j<=b && n1/j<=c){
								count++;
								s.insert({n2,{j,n1/j}});
							}
							if(j<=c && n1/j<=b){
								count++;
								s.insert({n2,{n1/j,j}});
							}
						}

						if(n1<=a && n2%j == 0){
							if(j<=b && n2/j<=c){
								count++;
								s.insert({n1,{j,n2/j}});
							}
							if(j<=c && n2/j<=b){
								count++;
								s.insert({n1,{n2/j,j}});
							}
						}

					}
				}

			}
		}

		cout << s.size() << endl;
	}
}