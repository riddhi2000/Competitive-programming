#include <bits/stdc++.h>
using namespace std;


string fractionToDecimal(int numerator, int denominator) {
    
    if (numerator == 0) return "0"; 
  
    if(numerator==INT_MIN && denominator==-1){
      return "2147483648";
    }
    
    int sign=(numerator<0 ^ denominator<0) ?-1 :1;
    
    long long n=abs(numerator);
    long long denom=abs(denominator);
    
    int y=n/denom;
    n=n%denom;
    int i=0;
    
    map<int,int> m;
    m[n]=i;
    
    string s=to_string(y);
    string d="",x="";
    
    while(n){
        n*=10;
        int t=abs(n/denom);
        d += to_string(t);
        n=n%denom;
        
        if( m.find(n) != m.end()){
            int k;
            x="";
            for(k=0;k<m[n];k++)
                x+=d[k];
            x+='(';
            while(k<=i){
                x += d[k];
                k++;
            }
            
            x += ')';
            d=x;
            break;
        }
        else{
           m[n]=++i; 
        }
    }

    
    if(d.length() > 0)
        s=s+"."+ d;
    
    if (sign == -1)
        s="-"+s;
  
  return s; 
}

int main(){
    
    cout << fractionToDecimal(-1,-2147483648) << endl;

    return 0;
}
