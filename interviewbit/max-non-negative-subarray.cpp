#include <bits/stdc++.h>

using namespace std;

vector<long long int> maxset(vector<long long int> &A) {
   vector<long long int> a;
   vector<long long int> b;

   long long int asum=0,bsum=0,f=0;

   for(long long int i=0;i<A.size();i++){
   		if(A[i] >= 0){
   			if(f == 0){
   				a.push_back(A[i]);
   				asum += A[i];
   			}
   			else{
   				b.push_back(A[i]);
   				bsum += A[i];
   			}
   		}
   		else{
   			if(f == 0){
   				if(asum > bsum)
   					f=1;
   				else
   					a.clear();
   			}
   			else{
   				if(bsum > asum)
   					f=0;
   				else
   					b.clear();
   			}

   		}

   }

   if(asum >= bsum)
   		return a;
   else
   		return b;
}

vector<int> maxset1(vector<int> &A) {
   int lc,lf,rf;

   long long int fsum=INT_MIN,csum=0;
   lc=0;
   lf=rf=INT_MIN;

   for(int i=0;i<A.size();i++){

   		if(A[i] >= 0){
   			csum += A[i];
   			if(csum > fsum || (csum==fsum && (rf-lf) < (i-lc))){
				lf=lc;
				rf=i;
				fsum=csum;
			}
   		}
		else{
			lc=i+1;
   			csum=0;
		}
   }
   vector<int> ans;

   if(lf == INT_MIN){	
   		return ans;
   }
   //cout << lf << rf << endl;
   for(int i=lf;i<=rf;i++){
   		ans.push_back(A[i]);
   }
   
   return ans;
}


int main(){
	int A[]= {1, 2, 5, -7, 2, 3};
	vector<int> a(A,A+ sizeof A/sizeof A[0]);

	vector<int> ans= maxset1(a);

	for(int i=0;i<ans.size();i++){
		cout << ans[i] <<" ";
	}
	cout << endl;
	
	return 0;
}