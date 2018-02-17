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

int isNumber(const string &A) {
    int n=A.length();
    int i=0;
    bool flag=true;

    if(i<n && A[i]=='+' || A[i]=='-'){
    	flag=false;
    	i++;
    }

    while(i<n && A[i]>='0' && A[i]<='9'){
    	flag=true;
    	i++;
    }

    if(i<n && A[i] == '.'){
    	i++;
    	flag=false;
    	while(i<n  && A[i]>='0' && A[i]<='9'){
    		flag=true;
    		i++;
    	}
    }


    if(i<n && A[i] == 'E' || A[i]=='e'){
    	i++;
    	flag=false;
    	if(i<n && A[i]=='+' || A[i]=='-')
    		i++;
    	while(i<n  && A[i]>='0' && A[i]<='9'){
    		flag=true;
    		i++;
    	}
    }

    if(i==n && flag==true)
    	return 1;
    else
    	return 0;
    
}


int main(){

	cout << isNumber("0.1") << endl;
	
	return 0;
}