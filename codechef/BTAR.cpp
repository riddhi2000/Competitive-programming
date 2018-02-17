#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define pb push_back
#define pp pop_back
#define mp make_pair
#define MOD 1e9+7

int main(){
	int t,n;
	cin >> t;

	while(t--){
		cin >> n;
		vector<int> v(n);
		map<int,vector<int> > m;

		for(int i=0;i<n;i++){
			cin >> v[i];
			m[v[i]%4].push_back(v[i]);
		}

		int a=m[1].size(),b=m[2].size(),c=m[3].size();

		int ans=b/2;
		if(b%2 != 0){
			b=1;
		}
		else{
			b=0;
		}

		int x=min(a,c);
		ans+=x;
		a-=x;c-=x;

		if((a*1+b*2+c*3)%4 != 0){
			cout << "-1" << endl;
		}
		else{
			if(c>0){
				ans+=((c/4)*3);
				c%=4;
			}
			if(a>0){
				ans+=((a/4)*3);
				a%=4;
			}

			b+=c;b+=a;

			ans+=(b+1)/2;

			cout << ans << endl;
		}
	}	
}