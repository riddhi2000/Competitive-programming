#include <bits/stdc++.h>
#include <cstring>
using namespace std;
#define MAX 10000000

int MOD=1e9+7;
int lazy[MAX] = {0};
int t,n,m;

void updateRangeUtil(int si,int ss, int se, int us,int ue, int d){
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
    	lazy[si]=(lazy[si]+d)%MOD;
        return;
    }
 
    int mid = (ss+se)/2;
    updateRangeUtil(si*2+1, ss, mid, us, ue, d);
    updateRangeUtil(si*2+2, mid+1, se, us, ue, d);

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
    getSumUtil(ss, mid, 2*si+1,arr);
    getSumUtil(mid+1, se, 2*si+2,arr);
}

int main(){
	cin >> t;
	int type;

	while(t--){
		memset(lazy,0,sizeof(lazy));
		cin >> n >> m;
		
		int l[n],r[n];
		
		vector<int> diff(m);
		vector<int> type2;
		vector<int> type1;

		for(int i=0;i<m;i++){
			diff[i]=1;
			cin  >> type >> l[i] >> r[i];
			l[i]--;r[i]--;
			if(type == 2)
				type2.push_back(i);
			else
				type1.push_back(i);
		}

		for(int i=type2.size()-1;i>=0;i--){
			int in=type2[i];
			for(int k=l[in];k<=r[in];k++){
				diff[k]=(diff[k]+diff[in])%MOD;
			}
		}

		for(int i=0;i<type1.size();i++){
			int in=type1[i];
			updateRangeUtil(0, 0, n-1, l[in], r[in], diff[in]);

		}

		vector<int> arr(n,0);
		getSumUtil(0, n-1, 0, arr);

		for(int i=0;i<n;i++){
			cout << arr[i] << " ";
		}
		cout << endl;
		
	}
}