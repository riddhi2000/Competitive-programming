#include <bits/stdc++.h>

using namespace std;

int main(){
    string s;
    getline(cin,s);
    
    //map<char,int> m;
    map<pair<char,char>,int > dp;
    
    //vector<char> v;
    
    for(int i=0;i<s.length();i++){
       /* if(m.find(s[i]) == m.end()){
            m[s[i]]=1;
            if(s[i] == ' ')
                v.push_back('.');
            else
                v.push_back(s[i]);
        }
        else{
            m[s[i]]++;
        }
        */
        if(i > 1){
            if(dp.find({min(s[i],s[i-1]),max(s[i],s[i-1])}) != dp.end()){
                dp[{min(s[i],s[i-1]),max(s[i],s[i-1])}]++;
            }
            else{
                dp[{min(s[i],s[i-1]),max(s[i],s[i-1])}]=1;
            }
        }
    }
    
    vector<pair<pair<int,char>,char> > vv;
    for(  map<pair<char,char>,int >::iterator it = dp.begin(); it != dp.end(); ++it ) {
        vv.push_back({{it->second,it->first.first},it->first.second});
    }
    sort(vv.begin(),vv.end());
    
    unordered_set<char> v;
    for(int i=0;i<vv.size();i++){
        v.insert(vv[i].second);
        v.insert(vv[i].first.second);
    }
    
    for(int i=0;i<26;i++){
       /* if(m.find(i+'a') == m.end()){
            v.push_back(i+'a');
        }
        if(m.find(i+'A') == m.end()){
            v.push_back(i+'A');
        }
        if(i<=9 && m.find(i+'0') == m.end() )
            v.push_back(i+'0');
        */
        v.insert(i+'a');
        v.insert(i+'A');
        if(i<=9)
        v.insert(i+'0');
        
    }
   
    if(v.find('.') == v.end()){
        v.insert('.');
    }
    
    int k=0;
    unordered_set<char> :: iterator it=v.begin();
    for(int i=0;i<3;i++,it++){
        if(i == 0 || i==2){
            for(int j=0;j<21;j++){
                cout << *it;
            }
        }
        else if(i == 1){
            for(int j=20;j>=0;j--){
                cout << *it;
            }
        }
        cout << endl;
    }
    
    return 0;
}
