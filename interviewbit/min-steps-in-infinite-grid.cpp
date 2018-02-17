#include <vector>
#include <iostream>
#include <algorithm>
#include <cassert>

using namespace std;

int coverPoints(vector<int> X, vector<int> Y) {
    int total=0;
    if(X.size() <= 1) return 0;
    assert(X.size() == Y.size());    
    for(int i=1;i<X.size();i++){    
      total = total+ max(abs(X[i]-X[i-1]),abs(Y[i] - Y[i-1]));
    }
    return total;
}

int main(){
  vector<int> a,b;
  a.push_back(4);
  a.push_back(8);
  a.push_back(-7);
  a.push_back(-5);
  a.push_back(-13);
  a.push_back(9);
  a.push_back(-7);
  a.push_back(8);

  b.push_back(4);
  b.push_back(-15);
  b.push_back(-10);
  b.push_back(-3);
  b.push_back(-13);
  b.push_back(12);
  b.push_back(8);
  b.push_back(-8);

  cout << coverPoints(a,b) << endl;

  return 0;
}