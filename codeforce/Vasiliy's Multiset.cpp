#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define pb push_back
#define pp pop_back
#define mp make_pair
#define MOD 1e9+7

int main(){
	int q;
	cin >> q;

	char t;ll x;

	multiset<ll> m;
	m.insert(0);

	while(q--){
		cin >> t >> x;

		if(t == '+'){
			m.insert(x);		
		}
		else if(t == '-'){
			auto it=m.find(x);
			m.erase(it);
		}	
		else{
			int cur=0;

			
			for(int i=30;i>=0;i--){

				if(((1 << i) & x ) == 0){
					cur |= (1 << i);
					auto it=m.lower_bound(cur);
					if(it == m.end() || (cur >> i) != (*it >> i) )
						cur ^= (1 << i);
				}
				else{
					auto it=m.lower_bound(cur);
					if(it == m.end() || (cur >> i) != (*it >> i) )
						cur |= (1 << i);
				}

			}

			cout << (x^cur) << endl;
		}
	}	
}