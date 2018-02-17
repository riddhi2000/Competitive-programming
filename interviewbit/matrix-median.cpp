#include <iostream>
#include <algorithm>
#include <vector>
#include <cmath>
#include <limits.h>

using namespace std;

int findMedian(vector<vector<int> > &A) {
    
    int low=030..58/;
    int high=INT_MAX;
    // cout << "high:" << high << endl;
   
    int target=((A.size()*A[0].size())/2)+1;
    int count=0;
     
    while(high-low > 1){
        count=0;
        int medium=low+(high-low)/2;
        cout <<"low: "<<low << "high:" <<high <<"target:" << target <<" count: " <<count<< "medium: " <<medium << endl;
        for(int i=0;i<A.size();i++){
            int l=0;
            int h=A[i].size();
            int m;
            while(l <= h){
                m=l+(h-l)/2;
                cout <<" L: " <<l<<" H:" <<h<<" m: "<<m << endl;
                if(A[i][m] > medium && A[i][m-1]<=medium){
                    break;
                }
                else if(A[i][m] <= medium){
                    l=m+1;
                }
                else{
                    h=m-1;
                }
            }
            
            count += m;
            cout << "Inside count: " << count << endl;
        }
        cout << "After: "<<"low: "<<low << "high:" <<high <<"target:" << target <<" count: " <<count<< "medium: "<< medium << endl;

        if(count < target)
            low=medium;
        else
            high=medium;
            
    }
    return high;
}

int main(){
    vector < vector <int > > A;
    vector<int> t;
    //1, 2, 2, 2, 2, 2, 3, 3, 3, 3, 3
    
    t.push_back(1);
    t.push_back(1);
    t.push_back(1);
    t.push_back(2);
    t.push_back(3);
    

    A.push_back(t);

    t.clear();
    // t.push_back(2);
    // t.push_back(6);
    // t.push_back(9);

    // A.push_back(t);

    // t.clear();
    // t.push_back(3);
    // t.push_back(6);
    // t.push_back(9);

    // A.push_back(t);

    for(int i=0;i < A.size();i++)
        for(int j=0;j<A[i].size();j++)
            cout << A[i][j] <<" "<< endl;

    cout << "Final Result: " << findMedian(A) << endl;
    return 0;
}
