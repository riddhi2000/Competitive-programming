#include <bits/stdc++.h>

using namespace std;

//for vectors
#define pb push_back
#define mp make_pair

typedef vector<int> vi; 
typedef pair<int,int> ii;
typedef vector<ii> vii;
typedef vector<vi> vvi;

//data types
typedef long long ll;

//loops
#define REP(i,a,b) \
    for(int i = int(a);i < int(b);i++)
#define TRvi(c,it) \
    for(vi::iterator it=(c).begin();it!=(c).end();it++)

int main(){
	int t,n,x,ans;
	cin >> t;

	while(t--){
		cin >> n;
		int a[n];
		long long int cum[n];

		REP(i,0,n){
			cin >> a[i];
			if (i ==0)
			cum[i]=a[i];
			else
			cum[i]=cum[i-1]+a[i];
		}
		

		ans=INT_MAX;

		if(n%2 == 0)
			x=n-1;
		else
			x=n;


		for(int i=x;i>=1;i-=2){
			for(int j=0;j<n && j+x<=n;j++){
				int tans=0,val=1,f=0,np=0;
				for(int k=j;k<j+x;k++){
					if(a[k] > val){
						tans += a[k]-val;
					}
					else if(a[k] < val){
						np=1;break;
					}
					if(val == x/2+1)
						f=1;
					if(f == 0 )
						val++;
					else
						val--;
				}
				if (np == 0){
					if (j>0)
					tans += a[j-1];
					if(j+x-1 != n-1)
						tans += a[n-1]-a[j+x-1];
					//cout << i << " " << j << " "<<j+x-1  << " " << tans << endl;
					ans=min(tans,ans);
				}
			}
		}

		cout << ans << endl;
	}
	
	return 0;
}