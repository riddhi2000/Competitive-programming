#include <iostream>
using namespace std;

int main()
{
    int n,k,q,l,r,t;
    cin >> n >> k >> q;
    
    string s=to_string (n);
    while(q--){
        cin >> l >> r;
        int ans=0;
        for(int i=l;i<=r;i++){
            string z=to_string(i);
            t=0;
            if(z.length() < s.length()){
                for(int j=0;j<z.length();j++){
                    if(s[j] != z[j]){
                        t++;
                    }
                }
                t+=s.length()-z.length();
                if(t <= k)
                    ans++;
            }
        }
        
        cout << ans << endl;
    }
    return 0;
}