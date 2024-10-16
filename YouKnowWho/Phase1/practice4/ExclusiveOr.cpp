#include<bits/stdc++.h>
using namespace std;
#define fastIO ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0)
#define ll long long
const int mod = 1e9+7;
int main()
{
	fastIO;
	ll a,b;
	cin>>a>>b;
	int aor=0;
	int bor=0;
	for(int i=a; i>=(a-4); i--)
	{
		if(i>0){
		aor^=i;
		}
		else{
			break;
		}
	}
	for(int j=b; j>=(b-4); j--)
	{
		if(j>0 ){
		bor^=j;
		}
		else{
			break;
		}
	}

	cout<< (aor^bor)<<endl;
	return 0;
}