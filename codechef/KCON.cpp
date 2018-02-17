#include<bits/stdc++.h>
using namespace std;

int main(){
	int t,n,k;
	cin >> t;

	while(t--){
		cin >> n >> k;

		vector<int> v(n);
		long long sum=0,sum1=0,sum2=0;
		for(int i=0;i<n;i++){
			cin >> v[i];
			sum+=v[i];
			sum2+=v[i];
			if(sum2 < 0)
				sum2=0;
			sum1=max(sum1,sum2);
		}

		for(int i=0;i<n;i++){
			v.push_back(v[i]);
		}
 		
		if(k == 1){
			cout << sum1 << endl;
		}
		else{
			long long ts=0,ans=0;
			if(sum > 0){
				ts=k*sum;
			}
			int i=0;ans=ts;
			while(i < n){
				if(v[i] < 0){
					ts-=v[i];
				}
				else{
					break;
				}
				ans=max(ans,ts);
				i++;
			}
			i=n-1;

			while(i >= 0){
				if(v[i] < 0){
					ts-=v[i];
				}
				else{
					break;
				}
				ans=max(ans,ts);
				i--;
			}


			sum1=0,sum2=0;
			for(int i=0;i<2*n;i++){
				sum2+=v[i];
				if(sum2 < 0)
					sum2=0;
				sum1=max(sum1,sum2);
			}

			ans=max(ans,sum1);
			cout << ans << endl;
		}
 		
	}
}