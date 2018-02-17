#include <bits/stdc++.h>
#include <cstring>
using namespace std;
#define MAX 10000000
 
int MOD=1e9+7;

int cmd[MAX] = {0};
int lazy[MAX] = {0};
int t,n,m;

void updateRangeUtil(int si,int ss, int se, int us,int ue, int diff){
    if (lazy[si] != 0){
        if (ss != se){
            lazy[si*2 + 1]   = (lazy[si*2 + 1] + lazy[si]) %MOD;
            lazy[si*2 + 2]   = (lazy[si*2 + 2] + lazy[si]) %MOD;
            lazy[si] = 0;
        } 
    }
 
    if (ss>se || ss>ue || se<us)
        return ;
 
    if (ss>=us && se<=ue){
    	lazy[si]=(lazy[si]+diff)%MOD;
        return;
    }
 
    int mid = (ss+se)/2;
    updateRangeUtil(si*2+1, ss, mid, us, ue, diff);
    updateRangeUtil(si*2+2, mid+1, se, us, ue, diff);
 
}

void updateRangeCmd(int si,int ss, int se, int us,int ue, int diff){
    if (cmd[si] != 0){
        if (ss != se){
            cmd[si*2 + 1]   = (cmd[si*2 + 1] + cmd[si]) %MOD;
            cmd[si*2 + 2]   = (cmd[si*2 + 2] + cmd[si]) %MOD;
            cmd[si] = 0;
        } 
    }
 
    if (ss>se || ss>ue || se<us)
        return ;
 
    if (ss>=us && se<=ue){
        cmd[si]=(cmd[si]+diff)%MOD;
        return;
    }
 
    int mid = (ss+se)/2;
    updateRangeCmd(si*2+1, ss, mid, us, ue, diff);
    updateRangeCmd(si*2+2, mid+1, se, us, ue, diff);
 
}
 
void getSumUtil(int ss, int se, int si,vector<int> &arr){
 
    if (lazy[si] != 0){
        if (ss != se){
            lazy[si*2 + 1]   = (lazy[si*2 + 1]+ lazy[si]) %MOD;
            lazy[si*2 + 2]   = (lazy[si*2 + 2]+ lazy[si]) %MOD;
            lazy[si] = 0;
        }   
    }
    if (ss>se || ss>=n || se<0 )
        return;
 
    if (ss == se ){
        arr[ss]=lazy[si];
        return;
    }
 
    int mid = (ss + se)/2;
    getSumUtil(ss, mid, 2*si+1, arr);
    getSumUtil(mid+1, se, 2*si+2, arr);
}

void getSumUtilcmd(int ss, int se, int si,int qs,vector<int> &diff){
    if (cmd[si] != 0){
        if (ss != se){
            cmd[si*2 + 1]   = (cmd[si*2 + 1]+ cmd[si]) %MOD;
            cmd[si*2 + 2]   = (cmd[si*2 + 2]+ cmd[si]) %MOD;
            cmd[si] = 0;
        }   
    }
   

    if (ss>se || ss>qs || se<qs )
        return;
 
    if (ss == se && ss==qs){
        diff[qs]=(diff[qs]+cmd[si])%MOD;
        return;
    }
 
    int mid = (ss + se)/2;
    getSumUtilcmd(ss, mid, 2*si+1, qs, diff);
    getSumUtilcmd(mid+1, se, 2*si+2, qs, diff);
}
 
int main(){
	
	cin >> t;
	while(t--){
		cin >> n >> m;
        int l[m],r[m];
        vector<int> diff(m,0);
		memset(lazy,0,sizeof(lazy));
        memset(cmd,0,sizeof(cmd));
		
        int type[m];
 
		for(int i=0;i<m;i++){
			diff[i]=1;
			cin  >> type[i] >> l[i] >> r[i];
			l[i]--;r[i]--;
		}
       
        for(int i=m-1;i>=0;i--){
            getSumUtilcmd(0, m-1, 0, i, diff);
            if(type[i] == 2){
                updateRangeCmd(0, 0, m-1, l[i], r[i], diff[i]);
            }
            else{
                updateRangeUtil(0, 0, n-1, l[i], r[i], diff[i]);
            }
        }
 
        vector<int> arr(n);
		getSumUtil(0, n-1, 0, arr);
 
		for(int i=0;i<n;i++){
			cout << arr[i] << " ";
		}
		cout << endl;
		
	}
} 