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

string trim(string A){
    int m=A.length();
    string temp="";
    int i=0;
    while(i<m && A[i]=='0') i++;
    if(i==m)
        temp="0";
    else {
        for(;i<m;i++)
            temp+=A[i];
    }
    return temp;
}

int compareVersion(string A, string B) {
    int n=A.length();
    int m=B.length();
    int i=0,j=0;
    string a="";
    string b="";

    while(i<n || j<m){
        
        while(i<n && A[i]!='.'){
            a += A[i++];
        }
        if(i < n)
        i++;
        
        while(j<m && B[j]!='.'){
            b += B[j++];
        }
        if(j<m)
        j++;

    	a=trim(a);
    	b=trim(b);


    	if(a.length() == b.length()){
            if(a > b)
                return 1;
            else if(a < b)
                return -1;
        }
        else {
            if(a.length() > b.length())
                return 1;
            else 
                return -1;
            
        }

        a="";
        b="";
    }
    
    return 0;
}


int main(){

	cout << compareVersion("1.2","1.2.1") << endl;
	cout << compareVersion("4444371174137455","5.16") << endl;
	
	return 0;
}