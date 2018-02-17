#include <bits/stdc++.h>

using namespace std;

vector<int> flip(string A) {
    vector<int> ans;

    int l1,l2,r2;
    int pc,cc;
    l1=l2=r2=0;
   	pc=INT_MIN;cc=0;

    for(int i=0;i<A.length();i++){
    	if(A[i] == '0'){
    		cc++;
    	}
    	else{
    		cc--;
    	}

    	if(cc > pc){
			l2=l1;
			r2=i;
			pc=cc;
    	}

    	if(cc < 0){
    		l1=i+1;cc=0;
    	}
    } 
	if(pc > 0){
		ans.push_back(l2+1);
		ans.push_back(r2+1);
	}
    return ans;

}

int main(){

	vector<int> ans=flip("1101010001");

	for(int i=0;i<ans.size();i++){
		cout << ans[i] << " ";
    }  
    cout << endl;

	return 0;
}
