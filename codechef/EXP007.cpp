#include<bits/stdc++.h>
using namespace std;

int myCompare(string X, string Y){
    string XY = X.append(Y);
    string YX = Y.append(X);
    return XY.compare(YX) > 0 ? 1: 0;
}

int main(){
	int t,n,x;
	cin >> t;

	while(t--){
		cin >> n;
		vector<string> a(n);
		for(int i=0;i<n;i++){
			cin >> x;
			a[i]=to_string(x);
		}

		sort(a.begin(), a.end(), myCompare);
 
	    for (int i=0; i < a.size() ; i++ )
	        cout << a[i];
	    cout << endl;
	}
}