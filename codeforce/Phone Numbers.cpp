#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define pb push_back
#define pp pop_back
#define mp make_pair
#define MOD 1e9+7

int main(){
	int n,k;
	cin >> n >> k;


	string s;
	cin >> s;

	vector<int> v(26,0);

	for(int i=0;i<n;i++){
		v[s[i]-'a']=1;
	}

	string t="";

	if(k > n){
		t=s;
		int in=0;
		for(int i=0;i<26;i++){
			if(v[i] == 1){
				in=i;
				break;
			}
		}
		while(n<k){
			n++;t+=(char)(in+'a');
		}
	}
	else if(k == n){
		t=s;
		int j=n-1,x=0;

		for(x=0;x<26;x++){
			if(v[x] == 1){
				break;
			}		
		}

		while(j >= 0){
			for(int i=(s[j]-'a')+1;i<26;i++){
				if(v[i] == 1){
					t[j]=char(i+'a');
					j=-1;
					break;
				}
				else{
					t[j]=char(x+'a');
				}
			}
			j--;
		}
	}
	else{
		t="";
		int j=k-1,x=0;

		for(x=0;x<26;x++){
			if(v[x] == 1){
				break;
			}		
		}

		for(int i=0;i<k;i++){
			t+=s[i];
		}
	
		while(j >= 0){
			for(int i=(s[j]-'a')+1;i<26;i++){
				//cout << j << " " << i << endl;
				if(v[i] == 1){
					t[j]=char(i+'a');
					j++;
					while(j < k){
						t[j++]=(char)x+'a';
					}

					j=-1;
					break;
				}
			}
			j--;
		}
	}

	cout << t << endl;

}