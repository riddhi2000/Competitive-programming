#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define pb push_back
#define pp pop_back
#define mp make_pair
#define MOD 1e9+7

int main(){
	int t,n,m,c1,c2;
	string s;
	cin >> t;

	while(t--){
		cin >> n >> m;
		c1=c2=0;

		for(int i=0;i<n;i++){
			cin >> s;

			for(int j=0;j<m;j++){

				if(i%2 == 0){
					if(s[j]!='R' && j%2==0){
						c1+=3;
					}
					else if(s[j]!='G' && j%2!=0){
						c1+=5;
					}

					if(s[j]!='R' && j%2!=0){
						c2+=3;
					}
					else if(s[j]!='G' && j%2==0){
						c2+=5;
					}
				}
				else{
					if(s[j]!='R' && j%2==0){
						c2+=3;
					}
					else if(s[j]!='G' && j%2!=0){
						c2+=5;
					}

					if(s[j]!='R' && j%2!=0){
						c1+=3;
					}
					else if(s[j]!='G' && j%2==0){
						c1+=5;
					}


				}

				
			}

		}

		cout << min(c1,c2) << endl;
	}	
}