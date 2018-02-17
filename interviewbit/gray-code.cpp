#include <bits/stdc++.h>
using namespace std;

void F(int n,vector<string> &v){
	if(n == 0)
		return ;
	vector<string> s;
	for(int i=0;i<v.size();i++){
		s.push_back("0"+v[i]);
	}
	for(int i=v.size()-1;i>=0;i--){
		s.push_back("1"+v[i]);
	}
	v=s;
	F(n-1,v);
}

vector<int> grayCode(int A) {
    vector<string> s;
    s.push_back("0");
    s.push_back("1");
    F(A-1,s);
    vector<int> ans;
    for(int i=0;i<s.size();i++)
    	ans.push_back(stoi(s[i],nullptr,2));
    return ans;
}


 vector<int> grayCode1(int n) {
            vector<int> result(1, 0); 
                
            for (int i = 0; i < n; i++) {
                int curSize = result.size();
                // push back all element in result in reverse order
                for (int j = curSize - 1; j >= 0; j--) {
                	cout << result[j] + (1 << i) << endl;
                    result.push_back(result[j] + (1 << i));
                } 
            }
            return result;
        }


int main(){

	std::vector<int> v=grayCode1(4);
	// for (int i = 0; i < v.size(); ++i){
	// 	cout << v[i] << endl;
	// }

	return 0;
}