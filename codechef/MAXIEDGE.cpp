#include <bits/stdc++.h>
using namespace std;

int main(){
	int n,t;
	cin >> t;

	while(t--){

		cin >> n;

		string a,b;
		cin >> a >> b;
		vector<int> A(26,0);
		for(int i=0;i<n;i++)
			A[a[i]-'a']++;
		for(int i=0;i<n;i++)
			A[b[i]-'a']++;

		string a1="",b1="";
		int f=0;
		for(int i=0;i<26;i++){
			if(A[i]%2 == 0){
				while(A[i]){
					if(f == 0) a1+=i+'a';
					else b1+=i+'a';
					A[i]--;f=(f+1)%2;
				}
			}
		}

		for(int i=0;i<26;i++){
			if(A[i]%2 != 0){
				while(A[i]){
					if(f == 0) a1+=i+'a';
					else b1+=i+'a';
					A[i]--;f=(f+1)%2;
				}
			}
		}
		cout << a1 << endl;
		cout << b1 << endl;

	}

	return 0;
}

  