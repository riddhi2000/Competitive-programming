#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define pb push_back
#define pp pop_back
#define mp make_pair
#define MOD 1e9+7

int main(){
	int n;
	cin >> n;

	int i=1;
	cout << "I hate";
	i++;
	while(i<=n){
		if(i%2 == 0){
			cout << " that I love";
		}
		else{
			cout << " that I hate"; 
		}
		i++;
	}
	cout << " it" << endl;	
}