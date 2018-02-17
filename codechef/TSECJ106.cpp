#include <bits/stdc++.h>

using namespace std;

int main(){
	int n;
	cin >> n;

	vector<int> l(n);
	for(int i=0;i<n;i++)
		cin >> l[i];

	sort(l.begin(),l.end());

	int count=0;
	for(int i=0;i<n;i++){
		count++;
		while(i<n && l[i+1]-l[i]<6)
			i++;
		
	}	

	cout << count << endl;

	return 0;
}