#include<bits/stdc++.h>
using namespace std;

int main(){
	int n;
	cin >> n;

	string s;
	getline(cin >> ws,s);

	int count=0;
	for(int i=0;i<n;i++){
		int count1=0;
		for(;i<n && s[i]!=' ';i++)
			if(s[i]>='A' && s[i]<='Z'){
				count1++;
			}
		count=max(count,count1);
	}
	cout << count << endl;

}