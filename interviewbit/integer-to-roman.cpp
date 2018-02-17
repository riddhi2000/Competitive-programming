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

string repeatNo(string ans,char c,int no){
	while(no-- > 0){
		ans += c;
	}
	return ans;
}

string intToRoman(int A) {
    
    string ans="";

    if(A <= 0)
    	return -1;

    while(A > 0){
	   if (A >= 1000){
            ans=repeatNo(ans,'M', A/1000);
            A = A%1000;
        }
        else if (A >= 500){
            if (A < 900){
               ans = repeatNo(ans,'D', A/500);
               A = A%500;
            }
            else{
                ans += "CM";
                A = A%100 ;
            }
        }
 
        else if (A >= 100){
            if (A < 400){
                ans = repeatNo(ans,'C', A/100);
                A = A%100;
            }
            else{
                ans += "CD";
                A = A%100;
            }
        }
        else if (A >= 50 ){
            if (A < 90){
                ans = repeatNo(ans,'L', A/50);
                A = A%50;
            }
            else{
                ans += "XC";
                A = A%10;
            }
        }
        else if (A >= 10){
            
            if (A < 40){
                ans = repeatNo(ans,'X', A/10);
                A = A%10;
            }
            else{
                ans += "XL";
                A = A%10;
            }
        }
        else if (A >= 5){
            if (A < 9){
                ans = repeatNo(ans,'V', A/5);
                A = A%5;
            }
            else{
                ans += "IX";
                A = 0;
            }
        }
        else if (A >= 1){
            if (A < 4){
                ans = repeatNo(ans,'I', A);
                A = 0;
            }
            else{
                ans += "IV";
                A = 0;
            }
        }

	}
}


int main(){
	
	return 0;
}