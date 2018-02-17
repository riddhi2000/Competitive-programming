#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int findMinXor(vector<int> &A) {
    int min=0;
    
    for(int i=0;i<A.size();i++){
        for(int j=0;j<A.size();j++){
            int t=A[i]^A[j];
            if(i!=j && t < min){
                cout << A[i] <<"    "<< A[j] << endl;
                min=t;
            }
           
        }
    }
    return min;
}

int main(){
    vector <int> A;
    
    for(int i=0;i<1000000;i++){
        A.push_back(i);
    }
    cout << findMinXor(A) << endl;

}