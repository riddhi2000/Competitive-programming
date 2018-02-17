#include <bits/stdc++.h>

using namespace std;

vector<int> plusOne(vector<int> &A) {
    int n=A.size();
    int carry=1;
    
    vector<int> ans;
    
    for(int i=n-1;i>=0;i--){
        ans.push_back((A[i]+carry)%10);
        carry=(A[i]+carry)/10;
    }
    
    if(carry != 0)
        ans.push_back(carry);
    
    int i=ans.size()-1;

    for(;i>=0 && ans[i]==0;i-- );
    
    vector<int> result;
    
    while(i>=0)
        result.push_back(ans[i--]);
        
    return result;
}


int main(){
	int A[]={0};
	vector<int> a(A,A+sizeof A/sizeof A[0]);
	vector<int> ans=plusOne(a);

	for(int i=0;i<ans.size();i++){
		cout << ans[i] <<" ";
	}
	cout << endl;

	return 0;
}