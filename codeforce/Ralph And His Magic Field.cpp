#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define pb push_back
#define pp pop_back
#define mp make_pair
const int MOD=1e9+7;


long long ipow(long long base, long long exp)
{
    long long result = 1;
    while (exp)
    {
        if (exp & 1)
            result = (result*base)%MOD;
        exp >>= 1;
        base =(base* base)%MOD;
    }

    return result;
}



int main(){
	long long int n,m,k;
	cin >> n >> m >> k;


	long long x=2*min(m,n)-1;

	long long ans=ipow(2,x-1);

	cout << ans << endl;

}