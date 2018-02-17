#include <bits/stdc++.h>

using namespace std;

int maxSubArray(const vector<int> &A) {
    
    int maxsum=A[0];
    int cur_max=A[0];
    
    for(int i=1;i<A.size();i++){
        cur_max=max(A[i],cur_max+A[i]);
        maxsum=max(maxsum,cur_max);
        
    }

    return maxsum;
}


int main(){
	int x[]={-2,1,-3,4,-1,2,1,-5,4};

	vector<int> a(x,x+sizeof x/sizeof x[0]);

	cout << maxSubArray(a) << endl;
	return 0;
}