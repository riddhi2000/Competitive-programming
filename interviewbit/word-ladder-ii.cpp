#include <bits/stdc++.h>
using namespace std;



void func(string start,string end,set<string> &D,int d,vector<string> &tans,vector<vector<string> > &ans){
    if(start == end){
        cout << start << endl;
       ans.push_back(tans);
    }
    else{
    
        for (set<string>::iterator it = D.begin(); it != D.end(); it++){
            string temp = *it;
            
            int tc=0;
            for(int j=0;j<start.length();j++){
                if(start[j]!=temp[j])
                    tc++;
                if(tc > 1)
                    break;
            }
            
            if (tc == 1){    
                tans.push_back(temp);
                D.erase(temp);
                func(temp,end,D,d+1,tans,ans);
                D.insert(temp);
                tans.pop_back();
                
            }
        } 
    }
    
    return;
}

vector<vector<string> > findLadders(string start, string end, vector<string> &dict) {
    vector<vector<string> > ans;
    
    set<string> D;
   
    for(int i=0;i<dict.size();i++){
        D.insert(dict[i]);
    }
    D.erase(start);
    vector<string> tans;
    tans.push_back(start);
    func(start,end,D,1,tans,ans);
    
    return ans;
}
int main(){

    vector<string> v= {"bb","ab"};
    //vector<string> v= {"baba", "abba", "aaba", "bbbb", "abaa", "abab", "aaab", "abba", "abba", "abba", "bbba", "aaab", "abaa", "baba", "baaa", "bbaa", "babb" };
    vector<vector<string> >  ans=findLadders(  "bb", "ab"  ,v) ;



    int m=INT_MAX;
    for(int i=0;i<ans.size();i++)
        if(m > ans[i].size())
            m=ans[i].size();
        
    for(vector<vector<string> > ::iterator it=ans.begin();it!=ans.end();){
        if((*it).size() > m)
            ans.erase(it);
        else
            it++;
    }

    for(int i=0;i<ans.size();i++){
            for(int j=0;j<ans[i].size();j++)
                cout << ans[i][j] << " ";
        cout << endl;
    }
}