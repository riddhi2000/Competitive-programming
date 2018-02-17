#include <bits/stdc++.h>
using namespace std;

int main(){
	int n,count=0,no;
	cin >> n;

	int r=1;
	vector<int> v;
	string s;
	bool flag=0;

	for(int i=0;i<2*n;i++){
		cin >> s;

		if(s == "add"){
			flag=0;
			cin >> no;
			v.push_back(no);
		}
		else{
			if(flag==0 && v.back() != r){
				flag=1;
				count++;
			}
			v.pop_back();
			r++;
		}
	}
	cout << count << endl;
	return 0;
}

  