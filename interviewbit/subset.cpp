#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
#include <set>

using namespace std;

void generateSubset(vector<int>&S, int index,vector<int> &cur,vector<vector<int> > &result){
	if(index >= S.size()){
		result.push_back(cur);
		return;
	}

	generateSubset(S,index+1,cur,result);

	cur.push_back(S[index]);
	generateSubset(S,index+1,cur,result);
	cur.pop_back();

}

vector<vector<int> > subsets(vector<int> &S) {
    
    sort(S.begin(),S.end()); 
    // int n=pow(2,A.size());

   	vector <vector<int > > result;
   	std::vector<int> current;

   	generateSubset(S, 0, current, result);
    
    // for(int i=0; i <n; i++){
    // 	vector <int> t;

    // 	for(int j=0;j<A.size();j++){

    // 		if( (i & (1 << j)) != 0){
    // 			t.push_back(A[j]);
    // 		}
    // 	}

    // 	if (find(ans.begin(), ans.end(), t) == ans.end())
    //         ans.push_back(t);
    // }

    sort(result.begin(),result.end());
    
    return result;
}

int main(){

	int a[] = {1,2,3};

	vector<int> A(a,a + sizeof(a) /sizeof(a[0]));

	vector<vector<int> > res=subsets(A);

	for(int i=0;i< res.size();i++){
		for(int j=0;j<res[i].size();j++){
			cout << res[i][j] << "	";
		}
		cout << endl;
	}

	return 0;
}