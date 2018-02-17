#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define pb push_back
#define pp pop_back
#define mp make_pair
#define MOD 1e9+7

int k;

int main(){
	cin >> k;

	// queue<pair<int,int> > q;

	// for(int i=1;i<=9;i++){
	// 	q.push({i,i});
	// }

	// while(!q.empty()){

	// 	if(q.front().second == 10){
	// 		k--;
	// 		if(k == 0){
	// 			cout << q.front().first << endl;
	// 			break;
	// 		}
	// 	}

	// 	int t=q.front().first;
	// 	int a=q.front().second;

	// 	for(int i=0;i<=9;i++){
	// 		//cout << t*10+i << " "  << a+i ;
	// 		q.push({t*10+i,a+i});
	// 	}

	// 	q.pop();

	// }
	


	long long no=19;
	while(k > 0){

		int c=0;
		long long t=no;

		while(t > 0){
			c+=t%10;
			t/=10;
		}

		if(c == 10){
			k--;
		}
		if(k <= 0){
			cout << no << endl;
		}
		no++;

	}

}