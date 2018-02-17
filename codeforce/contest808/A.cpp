#include <bits/stdc++.h>

using namespace std;

int main(){

	long long int x,y,digit=0,f=0,ans;
	cin >> x;

	y=x;
	if(x == 0)
		ans =1;
	else{
		while(y){
			f=y;
			y/=10;
			digit++;
		}
		
		y=0;
		if(digit == 1 && f<=8)
			ans=1;
		else{
			string s=to_string(f+1);

			while(--digit){
				s+='0';}
							
			y=stoi(s);

			ans=y-x;
		}
	}

	cout << ans << endl;

	return 0;
}