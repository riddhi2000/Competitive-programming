#include <bits/stdc++.h>
using namespace std;

int main(){
	int n,a,t;
	cin >> n >> a;

	int x[n];
	map<int,int> m;
	int cc=0;

	for(int i=0;i<n;i++){
		cin >> x[i];
		if(x[i] == a)
			cc++;
		else if(cc == 0){
			if(m.find(x[i])!=m.end())
				m[x[i]]++;
			else
				m[x[i]]=1;
		}
		else if(m.find(x[i])!=m.end() && m[x[i]]>=cc){
			m[x[i]]++;
		}
	}

	bool f=false;
	for(map<int,int>::iterator it=m.begin();it!=m.end();it++){
		if(it->second >= cc){
			f=true;
			cout << it->first << endl;
			break;
		}
	}
	if(f == false)
		cout << "-1" << endl;

	return 0;
}

  