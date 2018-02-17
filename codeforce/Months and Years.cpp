#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define pb push_back
#define pp pop_back
#define mp make_pair
#define MOD 1e9+7

int main(){
	int n,x;
	cin >> n;

	//312831303130313130313031

	string s="312831303130313130313031312831303130313130313031312831303130313130313031";
	string s1="312931303130313130313031312831303130313130313031312831303130313130313031";
	string s2="312831303130313130313031312931303130313130313031312831303130313130313031";
	string s3="312831303130313130313031312831303130313130313031312931303130313130313031";
	string t="";

	for(int i=0;i<n;i++){
		cin >> x;
		t+=to_string(x);
	}

	if(s.find(t) != string::npos || s1.find(t) != string::npos ||  s2.find(t) != string::npos ||  s3.find(t) != string::npos){
		cout << "YES" << endl;
	}
	else{
		cout << "NO" << endl;
	}

}