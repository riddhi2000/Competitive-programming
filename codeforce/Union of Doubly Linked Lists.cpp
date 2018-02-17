#include<bits/stdc++.h>
using namespace std;

int main(){
	int n;
	cin >> n;

	vector<pair<int,int> > v(n);
	vector<int> vf;
	vector<int> vl;


	for(int i=0;i<n;i++){
		cin >> v[i].first >> v[i].second;
		if(v[i].first == 0){
			vf.push_back(i);
		}
		if(v[i].second == 0){
			vl.push_back(i);
		}
	}



	for(vector<int>::iterator i=vf.begin();i!=vf.end();i++){
		for(vector<int>::iterator j=vl.begin();j!=vl.end();j++){
			if(vf[*i] != vl[*j]){
				cout << *i <<  " " << *j << endl;
				v[vf[*i]].first=vl[*j]+1;
				v[vl[*j]].second=vf[*i]+1;
				i = vf.erase(i); 
				j = vl.erase(j); 
				break;
			}
		}
	}

	for(int i=0;i<n;i++){
		cout <<  v[i].first  << " " <<  v[i].second << endl;
	}

}