#include<bits/stdc++.h>
using namespace std;

int main(){
	int t,n;
	cin >> t;

	while(t--){

		int x=0;
		for(int i=0;i<5;i++){
			cin >> n;
			x+=n;
		}

		if(x == 0){
			cout << "Beginner" << endl;
		}
		else if(x == 1){
			cout << "Junior Developer" << endl;
		}
		else if(x == 2){
			cout << "Middle Developer" << endl;
		}
		else if(x == 3){
			cout << "Senior Developer" << endl;
		}
		else if(x == 4){
			cout << "Hacker" << endl;
		}
		else if(x == 5){
			cout << "Jeff Dean" << endl;
		}
		
	}
}