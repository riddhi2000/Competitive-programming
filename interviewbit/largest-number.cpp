#include <bits/stdc++.h>

using namespace std;

#define pb push_back

typedef vector<int> vi;
typedef vector<vi> vvi;

int comparator(string x,string y){
	string xy=x+y;
	string yx=y+x;

	return (xy > yx) ? 1 : 0;
}

string largestNumber(vector<int> &A) {
	
	vector<string> v;

	for (int i = 0; i < A.size(); ++i)
	{
		/* code */
		v.pb(to_string(A[i]));
	}

	sort(v.begin(),v.end(),comparator);

	string s="";

	for (int i = 0; i < v.size(); ++i)
	{
		/* code */
		s+=v[i];
	}

	s.erase(0, min(s.find_first_not_of('0'), s.size()-1));

	return s;
}


int main(){

	vector<int> arr;
 
    //output should be 6054854654
    arr.push_back(0);
    arr.push_back(0);
    arr.push_back(0);
    arr.push_back(0);
 //    printLargest(arr);

	// int a[]={3, 30, 34, 5, 9};
	// vi arr(a,a + sizeof a/sizeof a[0]);

	cout << largestNumber(arr) << endl;
	
	return 0;
}