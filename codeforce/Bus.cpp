#include<bits/stdc++.h>
using namespace std;

int main(){
	int a,b,f,k;
	cin >> a >> b >> f >> k;

	int ans=-1;
	int count=0;
	int cb=b;
	int af=a-f;
	bool flag=true;

	while(k){
		if(cb < f){
			flag=false;break;
		}
		else{
			cb-=f;
			if(k==1 && cb<af){
				cb=b;count++;
			}
			else if(k>1 && cb < 2*af){
				cb=b;
				count++;
			}

			if(cb >= af){
				cb-=af;k--;
			}
			else{
				flag=false;break;
			}
		}

		if(k){
			if(cb < af){
				flag=false;break;
			}
			else{
				cb-=af;
				if(k==1 && cb<f){
					cb=b;count++;
				}
				else if(k>1 && cb < 2*f){
					cb=b;
					count++;
				}

				if(cb >= f){
					cb-=f;k--;
				}
				else{
					flag=false;break;
				}
			}

		}
	}

	if(flag==false)
		cout << ans << endl;
	else
		cout << count << endl;
}