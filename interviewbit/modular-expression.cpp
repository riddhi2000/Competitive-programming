#include <bits/stdc++.h>

using namespace std;


int Mod(int A, int B, int C) {
    
    
    int ans=1;
    
    A%=C;
    
    if(A == 0)
        return 0;
    
    if(B == 0)
        return 1%C;
    
    
    
    while(B){
        
        if(B%2 == 0){
            if(ans == 1)
                ans=A;
            ans=(ans*ans)%C;
            if(B == 2)
            	B=0;
            else
            	B = B >> 1;
        }
        else{
             ans = (ans*A)%C;
             B--;
        }
       
    }
      if(ans < 0)
            ans += C;
    return ans;

}

int main(){

	cout << Mod(-1,2,20) << endl;
	
	return 0;
}