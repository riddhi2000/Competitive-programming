#include<bits/stdc++.h>
using namespace std;

set<vector<int> > s;
map<vector<int>,int > m;

void f(vector<int> a){
	int count=1;
	if(m.find(a) != m.end())
		return;

	for(int i=0;i<a.size()-1;i++){
		if(i<a.size()-2 && a[i]>0 && a[i+1]>0){
			vector<int> x=a;
			x[i]--;x[i+1]--;x[i+2]++;
			if(s.find(x) == s.end()){
				f(x);
				count += m[x];
				s.insert(x);
			}
		}
		else if(a[i]>0 && a[i+1]>0){
			vector<int> x=a;
			x[i]--;x[i+1]--;
			x.push_back(1);
			if(s.find(x) == s.end()){
				f(x);
				count += m[x];
				s.insert(x);	
			}
		}
		
	}
	m[a]=count;
}

int main(){
	int t,n;
	cin >> t;
	int MOD=1e9+7;

	while(t--){
		cin >> n;
		vector<int> a(n);
		for(int i=0;i<n;i++)
			cin >> a[i];
		s.clear();
		s.insert(a);
		f(a);

		cout << m[a] << endl;
	}
}