#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define pb push_back
#define pp pop_back
#define mp make_pair
#define MOD 1e9+7

int main(){
	int n,m;
	cin >> n >> m;

	vector<int> a(n);
	vector<int> b(m);

	for(int i=0;i<n;i++){
		cin >> a[i];
	}

	for(int i=0;i<m;i++){
		cin >> b[i];
	}

	sort(a.begin(),a.end());
	sort(b.begin(),b.end());
	int i,j;

	for(i=0,j=0;i<n&&j<m;){
		if(a[i]==b[j])
			break;
		else if(a[i]<b[j])
			i++;
		else
			j++;
	}

	int x=a[0],y=b[0],no;

	if(a[i]==b[j])
		no=a[i];
	else if(x<y){
		no=x*10+y;
	}
	else
		no=y*10+x;

	cout << no << endl;
}