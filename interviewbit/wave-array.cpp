#include <bits/stdc++.h>

using namespace std;

#define pb push_back

typedef vector<int> vi;

vector<int> wave(vector<int> &A) {
    vector<int> ans(A);

    sort(ans.begin(),ans.end());

    for (int i = 0; i < ans.size()-1; i+=2)
    {
    	/* code */
    	swap(ans[i],ans[i+1]);

    }
    return ans;
}

int main(){

	int a[]={1, 2, 3, 4, 5};
	vi x(a,a + sizeof a/sizeof a[0]);

	vi t=wave(x);

	for (int i = 0; i < t.size(); ++i)
	{
		/* code */
		cout << t[i] <<" ";
	}
	cout << endl;
	
	return 0;
}