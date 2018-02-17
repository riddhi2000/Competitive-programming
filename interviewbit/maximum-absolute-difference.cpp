#include <bits/stdc++.h>

using namespace std;

int maxArr(vector<int> &A) {
    int max=0,x,t;
    
    for(int i=0; i<A.size(); i++){
        x=1;
        
        for(int j=i+1; j<A.size(); j++){
            t=x+abs(A[i]-A[j]);
            if(t > max)
                max=t;
                
            x++;
        }
    }
    
    return max;
}

int maxArrFinal(vector<int> &A) {
	int a,b,c,d;
	a=b=c=d=A[0];

	for(int i=1; i<A.size(); i++){
		int x=A[i]-i;
		int y=A[i]+i;

		if(y>a) a=y;
		if(y<b) b=y;
		if(x>c) c=x;
		if(x<d) d=x;
	}

	return max(abs(a-b),abs(c-d));
}

int main(){

	int a[]={1,3,-1};
	vector<int> A(a,a+3);

	cout << maxArrFinal(A) << endl;
	
	return 0;
}