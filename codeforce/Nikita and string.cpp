#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define pb push_back
#define pp pop_back
#define mp make_pair
#define MOD 1e9+7

int main(){
	string s;
	cin >> s;

	int i=0,j=s.length()-1;
	int ans=0;

	while(i<=j && s[i]=='a'){
		i++;ans++;
	}

	while(j>=i && s[j]=='a'){
		j--;ans++;
	}

	int ac=0,bc=0;
	for(int k=i;k<=j;k++){
		if(s[k] == 'b')
			bc++;
	}
	int ta=0;

	for(int l=i;l<=j;l++){
		if(s[l] == 'b'){
			int tb=bc,taa=ac;
			for(int r=j;r>=i;r--){
				ta=max(ta,tb+taa);
				if(s[r] == 'b'){
					tb--;
				}
				else{
					taa++;
				}
			}
			bc--;
		}
		else{
			ac++;
		}
	}


	cout << ans+ta << endl;	
}