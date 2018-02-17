#include <bits/stdc++.h>
using namespace std;

int ans=0;

map<deque<int>,bool> m;

void f(deque<int> v,int e,int h){
	deque<int> d=v;
	d.push_back(e);
	d.push_back(h);

	if(m.find(d) != m.end())
		return;
	m[d]=true;
	if(v.size() == 0){
		if(h > ans)
			ans=h;
		return;
	}

	int x=v.front();
	v.pop_front();

	if(x < e){
		f(v,e-x,h+1);
	}
	if(h > 1){
		f(v,e+x,h-1);
	}
	f(v,e,h);
	v.push_back(x);
	f(v,e,h);
}

int main(){
	int t,n,e;
	cin >> t;

	for(int k=1;k<=t;k++){
		m.clear();
		ans=0;
		cin >>  e >> n;
		deque<int> v(n);

		for(int i=0;i<n;i++){
			cin >> v[i];
		}
		f(v,e,0);
		cout << "Case #" << k << ": " << ans << endl;
	}
}