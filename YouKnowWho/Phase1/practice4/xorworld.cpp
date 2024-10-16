#include<bits/stdc++.h>
using namespace std;
#define fastIO ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0)
#define ll long long
const int mod = 1e9+7;
ll atox(ll i)
{
	ll ans=0;
	while(i>0 && i%4!=3)
	{
		ans^=i;
		i--;
	}
	return ans;
}
int main()
{
	fastIO;
	ll x,y;
	cin>>x>>y;	
	cout<< (atox(x-1)^atox(y))<<endl;

	return 0;
}