#include <bits/stdc++.h>

using namespace std;

int main(){
	int t,n,x;
	cin >> t;

	while(t--){
		cin >> n;
		vector<int> o;
		vector<int> e;
	
		for(int i=0;i<n;i++){
			cin >> x;
			if(x%2 == 0)
				e.push_back(x);
			else
				o.push_back(x);
		}

		sort(o.begin(),o.end());
		sort(e.begin(),e.end());

		int count=0;
		n=o.size();
		for(int i=0;i<n-1;i++){
			for(int j=i+1;j<n;j++){
				if((o[i]^o[j]) <= o[j])
					count++;
			}
		}
		n=e.size();
		for(int i=0;i<n-1;i++){
			for(int j=i+1;j<n;j++){
				if((e[i]^e[j]) <= e[j])
					count++;
			}
		}

		cout << count << endl;
	}
	
	return 0;
}