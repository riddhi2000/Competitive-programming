#include<bits/stdc++.h>
using namespace std;

struct sort_pred {
    bool operator()(const std::pair<int,int> &left, const std::pair<int,int> &right) {
        return left.second > right.second;
    }
};

int main(){
	int t,n,m,x;
	cin >> t;

	while(t--){
		cin >> n >> m;
		vector<int> minSal(n);
		
		for(int i=0;i<n;i++)
			cin >> minSal[i];
		
		vector<int> offerSal(m),maxJob(m);
		for(int i=0;i<m;i++){
			cin >> offerSal[i] >> maxJob[i];
		}

		int c=0,am=m;
		long long sal=0;
		vector<bool> given(m,false);

		for(int i=0;i<n;i++){
			string s;
			cin >> s;
			vector<pair<int,int> > v;
			for(int j=0;j<m;j++){
				if(s[j] == '1' && offerSal[j]>=minSal[i]){
					v.push_back(make_pair(j,offerSal[j]));
				}
			}
			sort(v.begin(),v.end(),sort_pred());
			for(int j=0;j<v.size();j++){
				if(maxJob[v[j].first] > 0 ){
					c++;
					maxJob[v[j].first]--;
					sal += v[j].second;
					if(given[v[j].first] == false){
						am--;given[v[j].first]=true;
					}
					break;
				}
			}
		}
		cout << c << " " << sal << " " << am << endl;
	}
}