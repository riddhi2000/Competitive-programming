#include<bits/stdc++.h>
using namespace std;

int main(){
	int n;
	cin >> n;

	vector<int> x(7,0);
	int m=0;

	while(n--){
		string s;
		cin >> s;

		for(int i=0;i<7;i++){
			if(s[i] == '1'){
				x[i]+=1;
				m=max(m,x[i]);

			}
		}
	}

	cout << m << endl;
}