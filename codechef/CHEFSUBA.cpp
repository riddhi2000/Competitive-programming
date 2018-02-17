#include <bits/stdc++.h>
 
using namespace std;
 
int main(){
 
	int n,k,p;
	int x=0;
	cin >> n >> k >> p;
 
	int a[n];
	int lindex=0,rindex=n-1;
 
	int sub[n];
	int count=0;	
 
	for(int i=0;i<n;i++){
		cin >> a[i];
	}
 
	string s;
	cin >> s;
 
	for(int i=0;i<p;i++){
 
		if(s[i] == '?'){
			count=0,x=0;
    			for(int j=lindex;x<k && x<n;j++,x++){
    				if(a[j%n] == 1)
    					count++;
    			}
 
    			int current=count;
     			x=0;
 
    			for(int j=lindex;x+k<n;j++,x++){
    				//cout << "fine" << endl;
    				current-=a[j%n];
    				current+=a[(j+k)%n];
    				count=max(count,current);
    			}
    			cout<< count << endl;
		}
		else{
			lindex=rindex;
			rindex=(rindex+n-1)%n;
			//cout << "lindex:" << lindex << "rindex: " <<rindex << endl;
		}
	}
	return 0;
} 