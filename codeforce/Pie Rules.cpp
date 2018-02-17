#include<bits/stdc++.h>
using namespace std;


int main(){
	int t,n;
	cin >> n;

	int pots[n];
	
	for(int i=0;i<n;i++){
		cin >> pots[i];
	}
	 
    vector<vector<pair<int,int> > > moves(n+1,vector<pair<int,int> >(n+1,{0,0}));
  	

    for(int i=0; i < n; i++){
        moves[i][i].second = pots[i];
    }
    
    for(int l = 2; l <= n; l++){
        for(int i=0; i <= n - l; i++){
            int j = i + l -1;
            if(pots[i] + moves[i+1][j].first > moves[i+1][j].second ){
                moves[i][j].second = pots[i] + moves[i+1][j].first;
                moves[i][j].first = moves[i+1][j].second;
                
            }else{
                moves[i][j].second = moves[i+1][j].second;
                moves[i][j].first = pots[i] + moves[i+1][j].first;
               
            }
        }
    }
 
	cout << moves[0][n-1].first << " " << moves[0][n-1].second << endl;

}
