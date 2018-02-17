#include <bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin >> t;

	while(t--){
		int n;
		cin >> n;
		int c[n];
		long long int w[n];

		for(int i=0;i<n;i++)
			cin >> c[i];
		for(int i=0;i<n;i++)
			cin >> w[i];

		long long int maxsum=INT_MIN,cur=0;;
		vector<bool> m(n+1,false);

		for(int i=0,j=0;i<n;i++){
			cur+=w[i];
			if(m[c[i]]==true){
				while(j<n && c[j]!=c[i]){
					cur-=w[j];
					m[c[j]]=false;
					j++;
				}
				cur-=w[j];j++;
			}
			else{
				m[c[i]]=true;
			}
			maxsum=max(maxsum,cur);
		}

		cout << maxsum << endl;

	}
	
	return 0;
}
