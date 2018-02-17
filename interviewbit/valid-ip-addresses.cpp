#include <bits/stdc++.h>

using namespace std;

//for vectors
#define pb push_back
#define mp make_pair

typedef vector<int> vi; 
typedef pair<int,int> ii;
typedef vector<ii> vii;
typedef vector<vi> vvi;

//data types
typedef long long ll;

//loops
#define REP(i,a,b) \
    for(int i = int(a);i <= int(b);i++)
#define TRvi(c,it) \
    for(vi::iterator it=(c).begin();it!=(c).end();it++)

void print(vector<string> v){
	REP(i,0,v.size()-1){
		cout << v[i] << endl;
	}
}

vector<string> restoreIpAddresses(string A) {
   int n=A.length();
   int index;
   bool flag=true;
   vector<string> res;
   string ans="",ans3="";
  
   for(int i=1;i<=3;i++){
       ans="";
       index=0;
       string temp="";
       flag=true;
       while(index < i){
           temp+=A[index++];
       }
       

       if( atoi(temp.c_str())<0 || atoi(temp.c_str())>255 )
        flag=false;
        
       for(int j=1;flag==true && j<=3;j++){
       	   ans = temp + ".";
       	   cout << "1st: " << ans << endl; 
           string temp="";
         	int count=0;

           while(count < j){
                temp+=A[index++];count++;
           }
           if(atoi(temp.c_str())<0 || atoi(temp.c_str())>255 )
            flag=false;
            
           for(int k=1;flag==true && k<=3;k++){
           	   int count=0;
	           string ans2 = ans + temp + ".";
	       	   cout << "  2nd: " << ans2 << endl; 
               string temp="";
         
               while(count < k){
                   temp += A[index++];count++;
               }
               if( atoi(temp.c_str())<0 || atoi(temp.c_str())>255 )
                flag=false;
                
                if(flag == true){
                	ans3 = ans2 + temp + ".";
	       	   		cout << "   3rd: " << ans3 << endl; 
                    string temp="";
         
                   while(index < n){
                        temp += A[index++];
                   }
                   if(atoi(temp.c_str())<0 || atoi(temp.c_str())>255 )
                    flag=false;
                    
                    ans3  = ans3+ temp;
                }
                
                if(flag == true){
                	cout << "      final: " << ans3 << endl; 
                    res.push_back(ans3);
                }
           }
       }
   }
   
   return res;
}

int main(){
	
	print(restoreIpAddresses("0100100"));

	return 0;
}