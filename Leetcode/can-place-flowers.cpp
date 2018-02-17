#include <bits/stdc++.h>

using namespace std;

    bool canPlaceFlowers(vector<int>& flowerbed, int n) {
        
        if(flowerbed.size()==0 && n>0)
            return false;
            
        if(flowerbed.size()==0 && n==0)
            return true;
       
       if(flowerbed[0] == 0 && flowerbed[1]==0){
           flowerbed[0]=1;
           n--;
       }
       
        for(int i=1;i<flowerbed.size()-1;i++){
            if(flowerbed[i]==0 && flowerbed[i-1] == 0 && flowerbed[i+1] == 0){
                flowerbed[i]=1;
                n--;
            }
        }
        
        if(flowerbed[flowerbed.size()-1] == 0  && flowerbed[flowerbed.size()-2] == 0 ){
                flowerbed[flowerbed.size()-1]=1;
                n--;
        }
        
        
        if(n <= 0)
            return true;
        else
            return false;
        
    }


int main(){

	vector<int> x;
	x.push_back(1);
	x.push_back(0);
	x.push_back(0);
	x.push_back(0);
	x.push_back(1);
	
	cout << canPlaceFlowers(x,2) << endl;
	
	return 0;
}