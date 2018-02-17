#include <bits/stdc++.h>
using namespace std;

vector<int> findSubstring(string A, const vector<string> &B) {
    
    vector<int> ans;
    int n=B.size();
    int count=0;
    
    for(int i=0;i<A.length();i++){
        vector<int> index(n,0);
        count=0;
        int j=0;
        int e,s=i;
        int f=0;

        while(count <  n && f<=n){  
            e=B[j].length();
            if(A.substr(s,e) == B[j]){
                if(index[j] == 0){
                    count++;
                    s=s+e;
                    index[j]=1;
                    f=0;
                }
                else{
                    break;
                }
            }
            f++;
            j=(j+1)%n;
        }
        
        if(count == n){
            ans.push_back(i);
        }
    }
    return ans;
}

int main(int argc, char const *argv[])
{
    vector<string> s;
    s.push_back("foo");
    s.push_back("bar");

    vector<int> v=findSubstring("barfoothefoobarman",s);

    for(int i=0;i<v.size();i++)
        cout << v[i] << " ";
    cout << endl;

    return 0;
}
