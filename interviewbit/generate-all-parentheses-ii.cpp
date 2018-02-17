#include <bits/stdc++.h>
using namespace std;

void F(int A,vector<string> &ans,string s,int a[]){
	if(a[0]==0 && a[1]==0){
		ans.push_back(s);
		return;
	}
	if(a[0] > 0){
		a[0]--;a[2]++;
		s.push_back('(');
		F(A,ans,s,a);
		a[0]++;a[2]--;
		s.pop_back();
	}
	if(a[1]>0 && a[2]>a[3]){
		a[1]--;a[3]++;
		s.push_back(')');
		F(A,ans,s,a);
		a[1]++;a[3]--;
		s.pop_back();
	}
}

vector<string> generateParenthesis(int A) {
   vector<string> ans;
   string cur="";
   int a[4]={A,A,0,0};
   F(A,ans,cur,a);
   return ans;
}


int main(){

	vector<string> v=generateParenthesis(3);

	for(int i=0;i<v.size();i++){
		cout << v[i] << endl;
	}

	return 0;
}