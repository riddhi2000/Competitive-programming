#include <bits/stdc++.h>

using namespace std;

#define pb push_back

typedef vector<int> vi;
typedef vector<float> vf;

int solve(vector<string> &A) {
	vf x,y,x1,x2;
	float zmin=INT_MAX;

	for (int i = 0; i < A.size(); ++i){
		float no=stof(A[i]);
		//cout << float(2/3) << endl;
		if(no < float(2.0/3.0)){
			//cout << no << endl;
			x.pb(no);
			cout << "x"<< no << endl;
			if(no>0.0 && no< float(1.0/2.0)){
				cout << "x1"<< no << endl;
				x1.pb(no);
			}
			else if(no>= float(1.0/2.0) && no< float(2.0/3.0)){
				cout << "z"<< no << endl;
				x2.pb(no);
			}
		}
		else if(no>=float(2.0/3.0) && no<1){
			cout << "y"<< no << endl;
			y.pb(no);
		}
		else if(no>1 && no<2 && zmin>no){
			cout << "z"<< no << endl;
			zmin=no;
		}
			
	}
	sort(x.begin(),x.end());
	sort(y.begin(),y.end());
	sort(x1.begin(),x1.end());
	sort(x2.begin(),x2.end());


	if(x.size()>=3 && 1.0<(x[x.size()-1]+x[x.size(	hf)-2]+x[x.size()-3]) && (x[x.size()-1]+x[x.size()-2]+x[x.size()-3])<2.0){
		cout << "o" << endl;
		return 1;
	}
	else if(x.size()>=2 && zmin!=INT_MAX  && 1.0<(x[0]+x[1]+zmin) && (x[0]+x[1]+zmin)<2.0){
		//cout << "m" << endl;
		return 1;
	}
	else if(x.size()>=1  && zmin!=INT_MAX  && y.size()>=1  && 1.0<(x[0]+y[0]+zmin) && (x[0]+y[0]+zmin)<2.0){
		//cout << "u" << endl;
		return 1;
	}
	else if(y.size()>=2 && x.size()>=1  && 1.0<(y[0]+y[1]+x[0]) && (y[0]+y[1]+x[0])<2.0){
		//cout << "g" << endl;
		return 1;
	}
	else if(x2.size()>=2  && y.size()>=1 && 1.0<(x2[0]+x2[1]+y[0]) && (x2[0]+x2[1]+y[0])<2.0){
		//cout << x2[0]+x2[1]+y[0] << endl;
		//cout << "v" << endl;
		return 1;
	}
	else if(x1.size()>=1 && y.size()>=1  && x2.size()>=1 && 1.0<(x1[0]+y[0]+x2[0]) && (x1[0]+y[0]+x2[0])<2.0){
		//cout << "i" << endl;
		return 1;
	}
	else if(x1.size()>=2  && y.size()>=1 && 1.0<(x1[x1.size()-1]+x1[x1.size()-2]+y[y.size()-1]) && (x1[x1.size()-1]+x1[x1.size()-2]+y[y.size()-1]) <2.0){
		//cout << "s" << endl;
		return 1;
	}

	return 0;
}


int main(){
	string a[]={ "2.445610", "0.129967", "2.376455", "1.910948", "0.917844", "0.815911", "1.743973"};
	vector<string> A(a,a+sizeof a/sizeof a[0]);

	cout << solve(A) << endl;
	
	return 0;
}