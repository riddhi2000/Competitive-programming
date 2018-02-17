#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define pb push_back
#define pp pop_back
#define mp make_pair
#define MOD 1e9+7
int n,k;

/*
bool fun(vector<vector<int> > a){

	for(int i=1;i<pow(2,n);i++){
		int ci=0,count=0;
		vector<int> c(4,0);
		int x=i;

		while(i){
			if(i&1){
				count++;
				for(int j=0;j<k;j++)
					c[j]+=a[ci][j];
			}
			i>>=1;ci++;
		}

		i=x;
		bool f=true;
		for(int j=0;j<k;j++){
			if(c[j] > count/2){
				f=false;
				break;
			}
		}
		if(f == true)
			return true;
	}
	return false;
}
*/

bool f(vector<vector<int> > &a,int ci,int count,vector<int> c){
	bool fl=true;
	if(ci > n)
		return false;

	for(int i=0;i<k;i++){
		if(c[i] > count/2){
			fl=false;
		}
	}
	if(fl == true && count>0){
		return true;
	}
	
	vector<int> x=c;
	if(ci < n){
		int  t=0;
		for(int i=0;i<k;i++){
			c[i]+=a[ci][i];t+=a[ci][i];
		}

		if(t < k)
			if(f(a,ci+1,count+1,c)){
				return true;
			}
	}

	if(f(a,ci+1,count,x))
		return true;

	return false;	
}

int main(){
	cin >> n >> k;

	vector<vector<int> >  a;
	
	
	for(int i=0;i<n;i++){
		for(int j=0;j<k;j++){
			cin >> a[i][j];
		}
	}

	vector<int> c(k,0);

	if(f(a,0,0,c))
		cout << "YES" << endl;
	else
		cout << "NO" << endl;	
}