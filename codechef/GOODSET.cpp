#include <bits/stdc++.h>

using namespace std;

int main(){

	int t,n,i;
	cin >> t;

	int arr[501];
	vector<int> ans;
	for(i=0;i<=500;i++)
		arr[i]=1;
	arr[0]=0;
	i=1;
	n=100;

	while(n--){
		while(i <= 500 && arr[i]==0)
			i++;

		if(i > 500)
			break;

		for(int j=0;j<ans.size();j++){
			if(i+ans[j] <= 500)
				arr[i+ans[j]]=0;
			else break;
		}
		ans.push_back(i);		
		i++;
	}
	while(t--){
		cin >> n;
		for(int i=0;i<n;i++){
			cout << ans[i] << " ";
		}
		cout << endl;
	}
	return 0;
}