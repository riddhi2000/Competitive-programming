#include<bits/stdc++.h>
using namespace std;

int main(){
	int n,count=0;
	cin >> n;

	vector<int> a(n),last(n+1,-1),index(n+1,0);
	priority_queue<int,vector<int>,greater<int> > pq;

	
	for(int i=0;i<n;i++){
		cin >> a[i];
		last[a[i]]=i;
	}

	for(int i=1;i<=n;i++){
		if(last[i]==-1)
			pq.push(i);
	}

	for(int i=0;i<n;i++){
		if(index[a[i]] || (last[a[i]]!=i &&  !pq.empty() && pq.top()<a[i])  ){
			count++;
			a[i]=pq.top();
			pq.pop();
		}
		index[a[i]]=1;
	}
	
	cout << count << endl;
	for(int i=0;i<n;i++)
		cout << a[i] << " ";
	cout << endl;

}