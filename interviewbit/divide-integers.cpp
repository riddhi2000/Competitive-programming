#include<bits/stdc++.h>
using namespace std;


int divide(int dividend, int divisor) {
  long long n=divisor;
    long long m=dividend;
    
    int sign = n < 0 ^ m < 0 ? -1 : 1;
    
    n=abs(n);
    m=abs(m);

    long long q=0;

    for (long long t = 0, i = 31; i >= 0; i--)
      if (t + (m << i) <= n)
          
  
    // while(n > 1){
    //    m >>= 1;
    //    n-=2;
    //    cout << m << endl;
    // }
   
   if (sign<0)
    q=-q;
    
   return q >= INT_MAX || m < INT_MIN ? INT_MAX : q;
}

int main(){

  cout << divide(-2147483648,-10000000) << endl;
}