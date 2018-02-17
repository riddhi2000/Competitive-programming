#include<bits/stdc++.h>
using namespace std;

int main(){
	int n;
	cin >> n;

	
	vector<int> v(26,0);
	int count=0;
	int gc=0;

	string s;
	cin >> s;

	for(int j=0;j<n;j++){

		if(s[j]>='a' && s[j]<='z'){
			if(v[s[j]-'a'] == 0){
				v[s[j]-'a']=1;
				count++;
				gc=max(gc,count);
			}
		}
		else{
			vector<int> v1(26,0);
			v=v1;
			count=0;
		}

	}

	cout << gc << endl;
	
}