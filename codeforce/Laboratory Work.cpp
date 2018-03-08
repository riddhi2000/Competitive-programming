#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define pb push_back
#define pp pop_back
#define mp make_pair
#define MOD 1e9+7

int main(){
	int n;
	cin >> n;

	vector<int> x(n);
	for(int i=0;i<n;i++){
		cin >> x[i];
	}

	vector<int> ans=x;
	sort(ans.begin(),ans.end());

	int i=0,j=n-1;
	int xx=ans[i]+1;

	int m=0;

	while(i<j && abs(ans[j]-ans[i]) == 2){
		m+=2;
		ans[i]++;ans[j]--;
		i++;j--;
	}


	vector<int> ans1=x;
	sort(ans1.begin(),ans1.end());

	i=0;
	xx=ans1[i]+1;
	//cout << xx << endl;

	int m1=0;

	if(ans1[n-1]-ans1[0] == 2){

		while(i+1<n){
			if(ans1[i]==xx && ans1[i+1]==xx){
				m1+=2;
				ans1[i]=xx-1;ans1[i+1]=xx+1;
			}
			
			i++;
		}
	}
	
	//cout << m << "  " << m1 << endl;
	if(m < m1){
		m=m1;
		ans=ans1;
	}
	cout << n-m << endl;
	for(int i=0;i<n;i++){
		cout << ans[i] << " ";
	}
	cout << endl;

}