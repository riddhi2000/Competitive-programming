#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> primesum(int A) {
    vector<bool> prime(A);
    
    vector<int> sol;
    
    for(int i=0;i<A;i++){
        prime [i]=true;
    }
    
    for(int i=2;i<A;i++){
        for(int j=i*2;j<A;j=j+i){
            prime[j]=false;
        }
    }
    prime[0]=false;
    prime[1]=false;
    
    for(int i=2;i<A;i++){
        if(prime[i] == true && prime[A-i]== true){
            sol.push_back(i);
            sol.push_back(A-i);
            break;
        }
            
    }
    
    return sol;
}
int main(){

    vector<int> ans = primesum(16777214);
    cout << ans[0] <<"  " << ans[1] << endl;
    return 0;
}