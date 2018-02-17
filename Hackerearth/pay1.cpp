#include <iostream>
using namespace std;

bool isSubSequence(string str1, string str2, int m, int n){
  int j = 0,i=0;
  for (; i<m&&j<n; i++)
    if (str1[i] == str2[j])
      j++;
 
   return (j==n);
}

int main()
{
    string s,t;
    cin >> s >> t;
    
    int n=s.length(),m=t.length();
    
    int q,i,j;
    cin>> q >> i;
    
    while(q--){
        cin >> i >> j;
        i--;j--;

        string s1="";
        for(int k=0;k<i;k++)
            s1+=s[k];
        for(int k=j+1;k<n;k++)
            s1+=s[k];
        
        //cout << s1 << endl;
        if(isSubSequence(s1,t,s1.length(),m))
            cout << "Yes" << endl;
        else
            cout << "No" << endl;
            
            
    }

    return 0;
}