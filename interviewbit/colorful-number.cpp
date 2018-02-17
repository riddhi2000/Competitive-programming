#include <bits/stdc++.h>

using namespace std;

int colorful(int A) {
 
   map <int,bool> ans;

   string s=to_string(A);

   for(int i=0;i<s.size();i++){
   		int m=1;
	   	for(int j=i;j<s.size();j++){
	   		m *= s[j]-'0';

	   		if(ans.find(m) != ans.end())
	   			return 0;
	   			ans[m]=true;
	   	}	   
   }
   
   return 1; 
}

int main(){

	cout << colorful(99) << endl;
	return 0;
}