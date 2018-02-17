#include <bits/stdc++.h>
using namespace std;

struct Tem{
	int d,t,s;
};

struct CompareByFirst {
    constexpr bool operator()(pair<int, int> const & a,
                              pair<int, int> const & b) const noexcept
    { return a.first < b.first; }
};

bool com(const Tem& x, const Tem& y) { 
	return x.d < y.d; 
}
int main(){
	int T,n,D,d,t,s;
	cin >> T;

	while(T--){
		cin >> n >> D;
		vector<Tem> v;

		for(int i=0;i<n;i++){
			struct Tem x;
			cin >> d >> t >> s;
			x.d=d;x.t=t;x.s=s;
			v.push_back(x);
		}

		sort(v.begin(), v.end(), com);
		priority_queue<pair<int,int>,
			vector<pair<int,int> >,CompareByFirst > pq;
		
		for(int i=1,j=0;i<=D;i++){
			
			while(j<v.size() && v[j].d <= i){
				//cout << v[j].d << v[j].t << v[j].s << endl;
				pq.push(make_pair(v[j].s,v[j].t));
				j++;
			}
			
			if(pq.empty()){
				continue;
			}
			pair<int,int> p=pq.top();
			pq.pop();
			p.second=p.second-1;
			if(p.second > 0)
				pq.push(p);
	
		}
		
		long long int ans=0;
		while(!pq.empty()){
			pair<int,int> p=pq.top();
			pq.pop();
			ans+=((long long int)(p.first)*(long long int)(p.second));
		}

		cout << ans << endl;

	}
	
	return 0;
} 