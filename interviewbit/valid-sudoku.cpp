#include <bits/stdc++.h>
using namespace std;

int isValidSudoku(const vector<string> &A) {
   
   for(int i=0;i<A.size();i++){
       vector<int> r(9,0);
       vector<int> c(9,0);
       for(int j=0;j<A.size();j++){
           if(A[i][j] != '.'){
               if(c[A[i][j]-'0'-1] == 0){
                   c[A[i][j]-'0'-1]=1;
               }
               else{
                   return 0;
               }
           }
           
           if(A[j][i] != '.'){
               if(r[A[j][i]-'0'-1] == 0){
                   r[A[j][i]-'0'-1]=1;
               }
               else{
                   return 0;
               }
           }
       }
   }
   
   
   for(int k=0,f=0;k<3;k++,f+=3){
       vector<int> c(9,0);
       for(int i=0;i<9;i++){
           if(i%3 == 0)
                fill(c.begin(), c.end(), 0);
            

                
           for(int j=0;j<3;j++){
               if(A[i][f+j] != '.'){
                   if(c[A[i][f+j]-'0'-1]==0){
                      c[A[i][f+j]-'0'-1]=1; 
                   }
                   else{
                       cout << "cell" << i << j << f  << A[i][f+j] << endl;
                       return 0;
                   }
               }
           }

           cout << i << endl;
            for(int z=0;z<9;z++)
                cout << c[z] << " ";
            cout << endl;
       }
       
   }
   
   return 1;
   
}


int main(){

  string arr[]={ "....5..1.", ".4.3.....", ".....3..1", "8......2.", "..2.7....", ".15......", ".....2...", ".2.9.....", "..4......" };

  vector<string> v(arr, arr + sizeof(arr) / sizeof(std::string));

  cout << "result:" << isValidSudoku(v) << endl;
  return 0;
}