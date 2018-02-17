#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define pb push_back
#define pp pop_back
#define mp make_pair
#define MOD 1e9+7

long long ans;

void fun(long long l,vector<long long> &c,vector<long long> &v,int i,long long cost){
	if(i >= v.size()){
		return;
	}
	if(l <= 0){
		ans=min(ans,cost);
		return;
	}
	fun(l,c,v,i+1,cost);
	fun(l-v[i],c,v,i,cost+c[i]);
	fun(l-v[i],c,v,i+1,cost+c[i]);

}

int main(){
	int n,l;
	cin >> n >> l;

	vector<long long> c(n);
	vector<long long> v(n);

	for(int i=0;i<n;i++){
		cin >> c[i];
		v[i]=pow(2,i);
	}

	ans=LLONG_MAX;
	fun(l,c,v,0,0);

	// vector<long long> vv(l+1,LLONG_MAX);
	// vv[0]=0;
	// for(int i=0;i<=l ;i++){
	// 	for(int j=0;j<n;j++){
	// 		if(v[j] >= i){
	// 			vv[i]=min(vv[i],c[j]);
	// 		}
	// 		else{
	// 			vv[i]=min(vv[i],c[j]+vv[i-v[j]]);
	// 		}
	// 	}
	// }

	cout << ans << endl;
}