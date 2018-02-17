#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define pb push_back
#define pp pop_back
#define mp make_pair
#define MOD 1e9+7

int main(){
	int t,n,d;
	cin >> t;

	while(t--){
		cin >> n >> d;
		vector<int> v(n);

		for(int i=0;i<n;i++){
			cin >> v[i];
		}


	    int n = v.size(), left = 0, right = 0, sum = 0, minlen = INT_MAX;

        while (right < n) {
            do sum += v[right++];
            while (right < n && sum < d);
            while (left < right && sum - v[left] >= d)
                sum -= v[left++];
            if (sum >= d) minlen = min(minlen, right - left);
        }
        if(minlen == INT_MAX){
        	cout << "-1" << endl;
        }
        else{
        	cout << minlen << endl;
        }

	}	

}