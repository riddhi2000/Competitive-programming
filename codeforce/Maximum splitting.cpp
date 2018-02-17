#include<bits/stdc++.h>
#define rep(i,n) for(int i=1;i<=n;++i)
#define N 100005
using namespace std;
int q,n;

int main(){
	scanf("%d",&q);
	rep(i,q){
		scanf("%d",&n);
		if(n<4||n==5||n==7||n==11){puts("-1");continue;}
		int ans=n/4;if(n%4==1||n%4==3)--ans;
		printf("%d\n",ans);
	}
}