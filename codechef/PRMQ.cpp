#include <bits/stdc++.h>

using namespace std;
int getMid(int s, int e) {  return s + (e -s)/2;  }

int getSumUtil(vector<map<int,int> > st, int ss, int se, int qs, int qe, int si,int x,int y){
    if (qs <= ss && qe >= se){
    	int result=0;
    	for(map<int,int> :: iterator it=st[si].begin();it!=st[si].end();it++){
    		if(it->first>=x && it->first<=y)
    			result += it->second;
    	}
        return result;
    }
    if (se < qs || ss > qe){
        return 0;
    }
    int mid = getMid(ss, se);
    return getSumUtil(st, ss, mid, qs, qe, 2*si+1,x,y) + getSumUtil(st, mid+1, se, qs, qe, 2*si+2,x,y);  
}

int getSum(vector<map<int,int> > st, int n, int qs, int qe,int x,int y){
    if (qs < 0 || qe > n-1 || qs > qe){
        return 0;
    }
    return getSumUtil(st, 0, n-1, qs, qe, 0,x,y);
}
 
map<int,int> constructSTUtil(vector<map<int,int> > v, int ss, int se, vector<map<int,int> > &st, int si){
    if (ss == se){
        st[si] = v[ss];
        return v[ss];
    }
 
    int mid = getMid(ss, se);
    st[si] =  constructSTUtil(v, ss, mid, st, si*2+1);
    map<int,int> temp=constructSTUtil(v, mid+1, se, st, si*2+2);

    for(map<int,int> :: iterator it=temp.begin();it!=temp.end();it++){
    	if(st[si].find(it->first)==st[si].end()){
    		st[si][it->first]=it->second;
    	}
    	else
    		st[si][it->first]+=it->second;
    }

    return st[si];
}

vector<map<int,int> > constructST(vector<map<int,int> > v, int n){ 
    int x = (int)(ceil(log2(n))); 
    int max_size = 2*(int)pow(2, x) - 1; 
    vector<map<int,int> > st(max_size);
    constructSTUtil(v, 0, n-1, st, 0);
    return st;
}

int main(){
	int n,q,l,r,x,y,p;
	cin >> n;

	bool prime[1000001];
	vector<int> primeno;
    memset(prime, true, sizeof(prime));
 	prime[0]=prime[1]=false;

    for (p=2; p*p<=1000000; p++){
        if (prime[p] == true){
        	primeno.push_back(p);
            for (int i=p*2; i<=1000000; i += p)
                prime[i] = false;
        }
    }
    for(;p<=1000000;p++){
    	if (prime[p] == true)
        	primeno.push_back(p);
    }

	int a[n];
	for(int i=0;i<n;i++)
		cin >> a[i];

	//cout << primeno.size() << endl;

	vector< map<int,int> > v(n);

	for(int i=0;i<n;i++){
		for(int j=0;j<primeno.size() && j<=sqrt(a[i]);j++){
			if(a[i]%primeno[j]==0)
				v[i][primeno[j]]=a[i]/primeno[j];
		}
	}

	// for(int i=0;i<v.size();i++){
	// 	for(int j=0;j<v[i].size();j++)
	// 		cout << v[i][j] << " ";
	// 	cout << endl;
	// }

	vector<map<int,int> > st = constructST(v, v.size());


	cin >> q;
	while(q--){
		cin >> l >> r >> x >> y;

		cout <<  getSum(st, n, l-1,r-1,x,y) << endl;
	}
	return 0;
}