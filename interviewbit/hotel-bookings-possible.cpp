#include <bits/stdc++.h>

using namespace std;

#define pb push_back
#define mp make_pair

typedef vector<int> vi;
typedef vector<vi> vvi;
typedef pair<int,int> ii;
typedef vector<ii> vii;

bool mycomparer(ii lhs, ii rhs) {
    if (lhs.first < rhs.first) {
        return true;
    }
    else if (lhs.first == rhs.first && lhs.second < rhs.second) {
        return true;
    }
    else {
        return false;
    }
}

bool hotel(vector<int> arrive, vector<int> depart, int K) {
	vii x;
	
	for(int i=0;i<arrive.size();i++){
		x.pb(mp(arrive[i],1));
		x.pb(mp(depart[i],0));
	}
	
	sort(x.begin(),x.end(),mycomparer);
	int count=0;

	for(int i=0;i<x.size();i++){	
		if(x[i].second == 1)
			count++;
		else
			count--;

		if(count > K){
			cout << "i:" << i  << "c:" << count << endl;
			return 0;
		}
	}
	return 1;
}

int main(){
	int X[]={4,3,2};
	int Y[]={3,2,1};
	

	vi x(X,X + sizeof X/sizeof X[0]);
	vi y(Y,Y + sizeof Y/sizeof Y[0]);
	cout << hotel(x,y,1) << endl;
	
	return 0;
}