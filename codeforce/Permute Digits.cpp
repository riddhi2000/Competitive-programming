#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define pb push_back
#define pp pop_back
#define mp make_pair
#define MOD 1e9+7

int main(){
	string a,b;
	cin >> a >> b;

	vector<int> v(10,0);

	for(int i=0;i<a.length();i++){
		v[a[i]-'0']++;
	}

	if(a.length() < b.length()){
		for(int i=9;i>=0;i--){
			while(v[i] > 0){
				cout << i;
				v[i]--;
			}
		}
	}
	else{
		ll ans=0;
		int l=0;
		for(int i=0;i<b.length();i++){
			int j=b[i]-'0';
			if(v[j] > 0){
				ans=ans*10+j;
				v[j]--;l++;
			}
			else{
				for(int k=j-1;k>=0;k--){
					if(v[k] > 0){
						ans=ans*10+k;
						v[k]--;l++;
						for(int k=9;k>=0;k--){
							while(v[k] > 0){
								ans=ans*10+k;
								v[k]--;l++;
							}
						}
					}
				}
				break;
			}
		}
		if(l != b.length()){
			while(ans > 0){
				v[ans%10]++;
				ans/=10;
				l--;
				int i=l;
				for(i=b[l]-'0'-1;i>=0;i--){
					if(v[i] > 0){
						break;
					}
				}
				if(i>0 && v[i]>0){
					ans=ans*10+i;
					v[i]--;
					break;
				}
			}
			for(int i=9;i>=0;i--){
				while(v[i] > 0){
					ans=ans*10+i;
					v[i]--;
				}
			}
		}
		cout << ans;
	}
	cout << endl;
}