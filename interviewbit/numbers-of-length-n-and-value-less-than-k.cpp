#include <bits/stdc++.h>

using namespace std;

//for vectors
#define pb push_back
#define mp make_pair

typedef vector<int> vi; 
typedef pair<int,int> ii;
typedef vector<ii> vii;
typedef vector<vi> vvi;

//data types
typedef long long ll;

//loops
#define REP(i,a,b) \
    for(int i = int(a);i <= int(b);i++)
#define TRvi(c,it) \
    for(vi::iterator it=(c).begin();it!=(c).end();it++)

int solve(vector<int> &A, int B, int C) {

	if(A.size() == 0)
		return 0;
	if(A.size()==1 && B==1 && C>0)
    return 1;


	int clength=to_string(C).length();
	int blength=B;

	int ans=0;

	if(blength < clength){
		int n=A.size();
		ans=n;
		if(A[0] == 0 && blength>1){
			ans=n-1;
		}
		n--;
		while(--blength){
			ans *= n--;
		}
	}
	else if(blength == clength){
		
		string c=to_string(C);
		
		int no=0;
		int i;
		for (i = 0; i < A.size() && A[i] < c[0]-'0'; ++i){
			// cout << A[i] << c[0] << endl;
			if(A[i]>0 || A[i]==0 && B==1){
				// cout <<  "here" << endl;
				no++;
			}
			
		}
		
		cout << no <<  A.size() << (blength-1)<< endl;
		if(blength > 1)
			ans += no*pow(A.size(),(blength-1));
		else
			ans=no;
		cout << " after 1: " << ans << endl;

		//cout << A[i] << endl;
		
		if(A[i] == c[0]-'0'){
			//cout << "here" << endl;
			int temp=1;
			for (int i = 1; i < blength; ++i){
				int t=0;
				for(int j=0;j<A.size();j++){
					if(i == blength-1){
						if(A[j] < c[i]-'0')
							t++;
					}
					else if(A[j] <= c[i]-'0')
						t++;
				}
				//cout << t << endl;
				temp*=t;
			}
			ans += temp;
		}

		
	}

	return ans;
}


int main(){
	vi A;
	
	A.pb(0);
	A.pb(2);
	A.pb(3);
	A.pb(4);
	A.pb(5);
	A.pb(7);
	A.pb(8);
	A.pb(9);


	cout << solve(A,5,86587) << endl;

	return 0;
}