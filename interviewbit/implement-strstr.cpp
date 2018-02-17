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


int strStr(const string &haystack, const string &needle) {
    int m=haystack.length();
    int n=needle.length();
    int i=1,len=0;
    int lps[n];
    lps[0]=0;
    
    while(i<n){
        if(lps[i] == lps[len]){
            lps[i++]=++len;
        }
        else{
            if(len != 0){
                len=lps[len-1];
            }
            else{
                lps[i++]=0;
            }
        }
    }    
    i=0;
    int j=0;
    while(i < m){
        if(haystack[i]==needle[j]){
            i++;j++;
        }
        if(j == n){
            return i-j;
            j=lps[j-1];
        }
        else if(i<m && haystack[i] != needle[j]){
            if(j != 0)
                j=lps[j-1];
            else
                i++;
        }
    }
    return -1;    
}


int main(){
	
	return 0;
}