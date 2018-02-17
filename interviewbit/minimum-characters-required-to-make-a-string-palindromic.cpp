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


int solve(string A) {
    
    string rev(A.rbegin(),A.rend());
    
    string pat=A+"$"+rev;
    
    int n=pat.length(),i=1,len=0;
    int lps[n];
    
    lps[0]=0;

    cout << pat << endl;
    
    while(i<n){
        if(pat[i] == pat[len]){
            len++;
            lps[i]=len;
            cout << lps[i] << " ";
            i++;
        }
        else{
            if(len != 0){
                len=lps[len-1];
            }
            else{
                lps[i]=0;
                cout << lps[i] << " ";
                i++;
            }
            
        }
        
    }
    cout << endl;
    return A.length()-lps[n-1];
    
}
int main(){

    cout << solve("AACECAAAA") << endl;
    
    return 0;
}