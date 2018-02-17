#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define pb push_back
#define pp pop_back
#define mp make_pair
#define MOD 1e9+7

int main(){
	int m;
	cin >> m;

	vector<int> v(m);
	map<int,bool> hm;

	for(int i=0;i<m;i++){
		cin >> v[i];
		hm[v[i]]=true;
	}

	bool flag=true;
	for(int i=0;i<m && flag;i++){
		for(int j=i+1;j<m;j++){
			int x=__gcd(v[i],v[j]);
			if(hm.find(x) == hm.end()){
				flag=false;break;
			}
		}
	}

	if(!flag)
		cout << "-1" << endl;
	else{
		cout << m <<  endl;
		for(int i=0;i<m;i++){
			cout << v[i] << " ";
		}

		 cout << endl;
	}

	/*set<int> s;
	s.insert(v[m-1]);

	bool flag=true;
	for(int i=m-2;i>=0 && flag;i--){
		if(hm[v[i]] == false)
			continue;

		s.insert(v[i]);

		for (set<int>::iterator it=s.begin(); it!=s.end(); ++it){
			int y=__gcd(v[i],*it);

			if(hm.find(y) == hm.end()){
				flag=false;
				break;
			}
			else{
				hm[y]=false;
			}
		}

	}*/	

	/*if(!flag)
		cout << "-1" << endl;
	else{
		cout << s.size() <<  endl;
		for (set<int>::iterator it=s.begin(); it!=s.end(); ++it)
		    cout<< *it << " ";

		 cout << endl;

	}*/
}