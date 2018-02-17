#include <bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin >> t;

	for(int k=1;k<=t;k++){
		cin.ignore();
		string s;
		getline(cin,s);

		int l,r,i=0,count=0;
		cin >> l >> r;
		int z=r-l+1;
		l--;		
		i=l%s.length();

		while(z--){
			if(s[i] == 'B')
				count++;
			i=(i+1)%s.length();
		}
		cout << "Case# " << k << ": " << count << endl;
	}
	
	return 0;
}

  