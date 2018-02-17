#include<bits/stdc++.h>
using namespace std;

bool isPali(string s){
	int i=0,j=s.length()-1;
	while(i<j){
		if(s[i] != s[j])
			return false;
		i++;j--;
	}
	return true;
}

int main(){
	int t,n,k,x,y;
	cin >> t;

	while(t--){
		cin >> n >> k;
		vector<int> v(n+1,0);
		while(k--){
			cin >> x >> y;
			v[x]=y;
		}

		string s="";
		for(int i=1;i<=n;i++){
			s+=to_string(v[i]);
		}

		int ans=n;

		for(int i=0;i<s.length();i++){

			string cur="";
			cur+=s[i];
			int j=i+1,k=i-1;
			
			while(j<s.length() && k>=0){
				cur=s[k]+cur+s[j];
				j++;k--;
				//cout << "cur:" << cur << endl;
				if(isPali(cur)){
					ans++;
				}
				else{
					break;
				}
			}
		}
		cout << ans << endl;
	}
}