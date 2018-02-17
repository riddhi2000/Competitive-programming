#include <bits/stdc++.h>
using namespace std;

vector<int> solve(int A, int B, int C, int D) {
    
    vector<int> v;

    v.push_back(A);
    v.push_back(B);
    v.push_back(C);
    
    sort(v.begin(),v.end());
    
    vector<int> index(3,0);
    vector<int> ans;
   	int p1=v[0],p2=v[1],p3=v[2];

    for(int i=0;i<D;){
        vector<int> temp=v;
        sort(temp.begin(),temp.end());
        int m=temp[0];
        if(ans.empty() || ans.back() != m){
        	cout << m << endl;
            ans.push_back(m);
            i++;
        }
            
        if(m == v[0]){
            v[0]=ans[index[0]]*p1;
            index[0]+=1;
        }
        else if(m == v[1]){
            v[1]=ans[index[1]]*p2;
            index[1]+=1;
        }
        else if(m == v[2]){
            v[2]=ans[index[2]]*p3;
            index[2]+=1;
        }
    }
    
    return ans;
}

int main(int argc, char const *argv[])
{
	vector<int> v=solve(3,7,11,50);
	return 0;
}