#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define pb push_back
#define pp pop_back
#define mp make_pair
#define MOD 1e9+7

int main(){
	int n,m,count;
	cin >> n >> m;

	vector<string> s(n);
	for(int i=0;i<n;i++){
		cin >> s[i];
	}

	count=0;
	vector<int> r(n,0),c(m,0);

	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++){
			if(s[i][j] == '*'){
				count++;r[i]++;c[j]++;
			}
		}
	}

	bool f2=false;
	int ir=0,ic=0;

	for(int i=0;i<n;i++){

		for(int j=0;j<m;j++){

			//cout << i << " " << j << " check" << m << endl;

			int cc=r[i]+c[j];

			if(s[i][j] == '*'){
				cc--;
			}

			if(cc==count){
				ir=i;ic=j;f2=true;
			}

			//cout << i << " " << j << " " << cc << " "  << endl;

		}
	}

	if(f2 == false && count!=0){
		cout << "NO" << endl;
	}
	else{
		cout << "YES" << endl;
		cout << ir+1 << " " << ic+1 << endl;
	}
	

}