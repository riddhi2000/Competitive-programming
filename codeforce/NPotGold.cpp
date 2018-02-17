#include<bits/stdc++.h>

using namespace std;

public class NPotGold {

	static class Pair{
        int first, second;
    }

    public Pair[][] findMoves(int pots[]){
        
        Pair[][] moves = new Pair[pots.length][pots.length];
        
        for(int i=0; i < moves.length; i++){
            for(int j=0; j < moves[i].length; j++){
                moves[i][j] = new Pair();
            }
        }
        
        for(int i=0; i < pots.length; i++){
            moves[i][i].second = pots[i];
        }
        
        for(int l = 2; l <= pots.length; l++){
            for(int i=0; i <= pots.length - l; i++){
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
        
        return moves;
    }
    //prints the sequence of values and indexes
    public void printSequence(int pots[], Pair moves[][]){
        int i = 0;
        int j = pots.length - 1;
        int step;
        for (int k = 0; k < pots.length; k++) {
            step = moves[i][j].pick;
            //this is the value of pick and its index
            System.out.print("value: " + pots[step] + " " + "index: " + step + " ");
            if (step <= i) {
                i = i + 1;
            } else {
                j = j - 1;
            }
        }

    public static void  main(){
        int t,n;
        cin >> n;

        int arr[n];
        
        for(int i=0;i<n;i++){
            cin >> arr[i];
        }
        
        Pair[][] moves = npg.findMoves(arr);

        cout << moves[i][j].first << " " << moves[i][j].second << endl;
    }
}


