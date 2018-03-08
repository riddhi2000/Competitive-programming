#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define pb push_back
#define pp pop_back
#define mp make_pair
#define MOD 1e9+7

int main(){
	

	int a,b;
	cin >> a >> b;

	if(a > b){
		swap(a,b);
	}

	int ans=0,cur=1;

	while(a != b){
		a++;
		ans+=cur;

		if(a != b){
			b--;
			ans+=cur;
		}

		cur+=1;
	}

	cout <<  ans << endl;

}