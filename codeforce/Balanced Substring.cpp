#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define pb push_back
#define pp pop_back
#define mp make_pair
#define MOD 1e9+7

int findSubArray(string arr, int n){
    int maxsize = -1, startindex;  
    int sumleft[n];
 
    int min, max; 
    int i;
  
    sumleft[0] = ((arr[0] == '0')? -1: 1);
    min = arr[0]; max = arr[0];
    for (i=1; i<n; i++)
    {      
        sumleft[i] = sumleft[i-1] + ((arr[i] == '0')? 
                     -1: 1);
        if (sumleft[i] < min)
            min = sumleft[i];
        if (sumleft[i] > max)
            max = sumleft[i];
    }
  
    int hash[max-min+1];
    for (i=0; i<max-min+1; i++)
        hash[i] = -1;
  
    for (i=0; i<n; i++){
        if (sumleft[i] == 0){
           maxsize = i+1;
           startindex = 0;
        }
        if (hash[sumleft[i]-min] == -1)
            hash[sumleft[i]-min] = i;
        else{
            if ((i - hash[sumleft[i]-min]) > maxsize){
                maxsize = i - hash[sumleft[i]-min];
                startindex = hash[sumleft[i]-min] + 1;
            }
        }
    }
  	if(maxsize == -1)
  		maxsize=0;
    return maxsize;
}


int main(){
	int n;
	cin >> n;

	string s;
	cin >> s;

	cout << findSubArray(s,n) << endl;	
}