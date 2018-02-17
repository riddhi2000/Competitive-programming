#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define pb push_back
#define pp pop_back
#define mp make_pair
#define MOD 1e9+7

int main(){
	int n,k,t;
	cin >> n >> k;



	vector<int> z;
	vector<int> x(n+1,0);
	stack<int> st;
	int last=-1;

	int be=1;

	for(int i=0;i<k;i++){
		cin >> t;
		z.push_back(t);

		x[t]=1;

		if(t == be){
			be++;
			continue;
		}
		while(!st.empty() && st.top()==be ){
			be++;
			st.pop();
		} 
		if(!st.empty() && t > st.top()){
			cout << "-1" << endl;
			return 0;
		}
		else{
			st.push(t);
		}

	}

	stack<int> s;

	for(int i=1;i<=n;i++){

		if(x[i]==0 && (st.empty() || i < st.top()) ){
			s.push(i);
		}
		else{
			while(!s.empty()){
				z.push_back(s.top());
				s.pop();
			}
			if(!st.empty() && st.top() == i){
				st.pop();
			}
		}

	}

	while(!s.empty()){
		z.push_back(s.top());
		s.pop();
	}
	for(int i=0;i<n;i++){
		cout << z[i] << " ";
	}

	cout << endl;
}