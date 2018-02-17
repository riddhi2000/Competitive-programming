#include <bits/stdc++.h>

using namespace std;

vector<int> getRow(int A) {

	std::vector<int> v;

	int x = 1;
    for (int k = 0; k <= A; k++)
    {
        v.push_back(x);
        x = x * (A - k) / (k + 1);
    }
    return v;

}


int main(){

	int k;
	cin >> k;

	vector<int> x=getRow(k);
	
	for (int i = 0; i < x.size(); ++i)
	{
		cout << x[i] << " ";
	}
	cout << endl;

	return 0;
}