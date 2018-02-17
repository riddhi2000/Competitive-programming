#include <bits/stdc++.h>

using namespace std;
int ans;
int n,ts,tf;

void fun(int s[],int f[],int d[],int j,int time,int ta){
	if(time >= tf || j==n-1){
		if(j == n-1 && time <=tf){
			ans=max(ans,ta);
		}
		return;
	}
	int z=s[j];
	while(z < time){
		z+=f[j];
	}
	fun(s,f,d,j+1,z+d[j],ta);

	time+=ts;
	while(z < time){
		z+=f[j];
	}
	fun(s,f,d,j+1,z+d[j],ta+1);
}

int main(){
	int t;
	cin >> t;

	for(int i=0;i<t;i++){
		ans=-1;

		cin >> n >> ts >> tf;
		int s[n],f[n],d[n];
		int time=0,visited=0;

		for(int j=0;j<n-1;j++){
			cin >> s[j] >> f[j] >> d[j];
		}

		fun(s,f,d,0,0,0);
		if(ans == -1)
			cout << "Case #" << i+1 << ": " << "IMPOSSIBLE" << endl;
		else
			cout << "Case #" << i+1 << ": " << ans << endl;
	}
	return 0;
}