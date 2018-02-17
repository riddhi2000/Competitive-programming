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

int value(char r){
    if (r == 'I')
        return 1;
    if (r == 'V')
        return 5;
    if (r == 'X')
        return 10;
    if (r == 'L')
        return 50;
    if (r == 'C')
        return 100;
    if (r == 'D')
        return 500;
    if (r == 'M')
        return 1000;
 
    return -1;
}

int romanToInt(string A) {
   int n=A.length();
   int res=0;

   for(int i=0;i<n;i++){
   		int s1 = value(A[i]);
        if (i+1 < n){
            int s2 = A(str[i+1]);
            if (s1 >= s2){
                res = res + s1;
            }
            else{
                res = res + s2 - s1;
                i++; 
            }
        }
        else{
            res = res + s1;
            i++;
        }
   }

   return res; 
}

int main(){
	
	return 0;
}