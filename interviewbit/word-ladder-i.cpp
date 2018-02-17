#include <bits/stdc++.h>
using namespace std;

int ladderLength(string start, string end, vector<string> &dictV) {
    
    if(start == end)
        return 1;
        
    queue<pair<string,int> > q;
    q.push(make_pair(start,1));
    
    while(!q.empty()){
        
        string word=q.back().first;
        int d=q.back().second;
        q.pop();
        
        vector<string> :: iterator it;
        
        for(it=dictV.begin();it!=dictV.end();){
            int tc=0;
            string temp=*it;
            
            for(int j=0;j<word.length();j++){
                if(word[j]!=temp[j])
                    tc++;
                if(tc > 1)
                    break;
            }
            if(tc == 1){
               q.push({temp,d+1});
               it=dictV.erase(it);
               
               
               if(temp == end)
                return d+1;
            }
         
                it++;      
            
        }
        
    }
    
    
    return 0;
}

int main(){

    vector<string> v= {"baba", "abba", "aaba", "bbbb", "abaa", "abab", "aaab", "abba", "abba", "abba", "bbba", "aaab", "abaa", "baba", "baaa", "bbaa", "babb" };
    cout << ladderLength( "bbaa" ,"babb" ,v) << endl;
}
