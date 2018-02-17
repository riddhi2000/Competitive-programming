#include <bits/stdc++.h>
using namespace std;
int maxvalue=0;


void f(string &l,int n){
	for(int i=0;i<n;i++){
		string t=l;
		int j=(i+1)%n;
		if(i!=j && l[i] == l[j]){
			int a=t[i]-'0';a++;
			maxvalue=max(maxvalue,a);
			t[i]=a+'0';
			t.erase(t.begin()+j);
			f(t,n-1);
		}
	}
}


int main(){
	int t,x;
	cin >> t;

	while(t--){
		int n;
		cin >> n;
		maxvalue=0;

		string l;
		for(int i=0;i<n;i++){
			cin >> x;
			l.push_back(x+'0');
			if(maxvalue < x)
				maxvalue=x;
		}

		f(l,n);
		cout << maxvalue << endl;

	}
	
	return 0;
}

  