#include <bits/stdc++.h>

using namespace std;


int main(){
	int t;
	cin >> t;

	while(t--){
		int m1=INT_MIN,m2=INT_MIN;
  		vector<int> cl;
  		int c;
  		string line;
  		getline(cin >> ws, line);

  		istringstream iss(line);
  		while ( iss >> c) {   
    		cl.push_back(c);
    		if( c > m2)
    			m2=c;
    		if(m2 > m1)
    			swap(m1,m2);
  		}
  		if(cl.size()-1 == m1)
  			cout << m2 << endl;
  		else
  			cout << m1 << endl;

	}	

	return 0;
}