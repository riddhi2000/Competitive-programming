#include <bits/stdc++.h>
using namespace std;


string getPermutation(int n, int k) {
	string s="";
    for(int i=1;i<=n;i++)
    	s=s+to_string(i);

    for(int i=0;i<k-1;i++){
    	next_permutation(s.begin(),s.end());
    }
    return s;
}

int fact(int n){
	if(n == 12)
		return INT_MAX;
	int ft=1;
	while(n > 1){
		ft*=n;
		n--;
	}
	return ft;
}

string getP(int k,vector<int> v){
	if(v.size() == 0)
		return "";
	int n=v.size();
	int f=fact(n-1);
	int pos=k/ f;
	k %= f;

	string ch=to_string(v[pos]);
	v.erase(v.begin()+pos);
	return ch+getP(k,v);

}

string getPermutation1(int n, int k) {

	vector<int> v;
	for(int i=1;i<=n;i++)
    	v.push_back(i);

    return getP(k-1,v);
}


int main(){

	cout << getPermutation1(3,4) << endl;

	return 0;
}