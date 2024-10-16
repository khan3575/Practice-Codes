#include<bits/stdc++.h>
using namespace std;
#define fastIO ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0)
#define ll long long
const int mod = 1e9+7;
int main()
{
	fastIO;
	ll x,y;
	cin>>x>>y;
	ll j=1;
	int cnt=0;
	for(ll i=x; i<=y; i*=2)
	{
		cnt++;
		//cout<<i<<endl;
	}
	cout<<cnt<<endl;
	return 0;
}