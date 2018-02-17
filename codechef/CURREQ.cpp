#include<bits/stdc++.h>
using namespace std;

int main(){
	int te,s,x,y,t;
	cin >> te;

	while(te--){
		cin >> s >> x >> y >> t;
		unordered_map<int,int> m1,m2;

		for(int i=2;x>1;i++){
			while(x>1 && x%i == 0){
				if(m1.count(i) == 0)
					m1[i]=1;
				else
					m1[i]++;
				x/=i;
			}
		}

		for(int i=2;y>1;i++){
			while(y>1 && y%i == 0){
				if(m2.count(i) == 0)
					m2[i]=1;
				else
					m2[i]++;
				y/=i;
			}
		}

		
	}
}