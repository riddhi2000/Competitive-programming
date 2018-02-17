#include <bits/stdc++.h>
 
using namespace std;
 
int main(){
 
    int n,k,p;
    cin >> n >> k >> p;

    if(k > n)
        k=n;
 
    int arr[n];
    int lindex=0,rindex=n-1;
 
    int sub[n];
    int count=0;    
 
    for(int i=0;i<n;i++){
        cin >> arr[i];
        if(i<k && arr[i] == 1)
            count++;
    } 
    sub[0]=count;
  
    for(int i=1;i<n;i++){
        sub[i]=sub[i-1]-arr[i-1]+arr[(i+k-1)%n];
    }

    cout << "sub " << endl;
    for(int i=0;i<n;i++)
        cout << sub[i] <<" ";
    cout << endl;

    k=n-k+1;
    deque<int> q(k);
    int i;
    
    for(i=0;i<k;i++){
        while ( (!q.empty()) && sub[i]>=sub[q.back()]  )
            q.pop_back();
        q.push_back(i);
    }

    for(int j=0; j<n ;j++){
        arr[j++]=sub[q.front()];

    while ( (!q.empty()) && q.front() == (i - k))
        q.pop_front();

    while ( (!q.empty()) && sub[i%n] >= sub[q.back()])
        q.pop_back();

    q.push_back(i%n);

    }

    for(int i=0;i<n;i++)
        cout << arr[i] <<" ";
    cout << endl;

    string s;
    cin >> s;

    for(int i=0;i<p;i++){
 
        if(s[i] == '?'){
            cout  << arr[lindex] << endl;
        }
        else{
            lindex=rindex;
            rindex=(rindex+n-1)%n;
            //cout << "lindex:" << lindex << "rindex: " <<rindex << endl;
        }
    }
    return 0;
}
Chat Conversation End
Type a message...

