#include<bits/stdc++.h>
using namespace std;

int main(){
	int t,n;
	cin >> t;

	while(t--){
		string x,y;
		cin >> x >> y;

		string xx="";
		int bm=1,bx=0;

		for(int i=0;i<x.length();i++){
			if(x[i] == '('){
				bx=1;
				if(i > 0 && x[i-1]=='-'){
					bm*=-1;
				}
			}
			else if(x[i] == ')'){
				bx=0;bm=1;
			}
			else{
				if(bx==1 && bm==-1){
					if(x[i] == '+')
						xx+='-';
					else if(x[i] == '-')
						xx+='+';
					else
						xx+=x[i];
				}else{
					xx+=x[i];
				}

			}
		}

		string yy="";
		bm=1;bx=0;

		for(int i=0;i<y.length();i++){
			if(y[i] == '('){
				bx=1;
				if(i > 0 && y[i-1]=='-'){
					bm*=-1;
				}
			}
			else if(y[i] == ')'){
				bx=0;bm=1;
			}
			else{
				if(bx==1 && bm==-1){
					if(y[i] == '+')
						yy+='-';
					else if(y[i] == '-')
						yy+='+';
					else
						yy+=y[i];
				}else{
					yy+=y[i];
				}

			}
		}


		if(xx == yy)
			cout << "YES" << endl;
		else{
			cout << "NO" << endl;
		}
	}
}