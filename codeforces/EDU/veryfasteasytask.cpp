#include<bits/stdc++.h>
using namespace std;
#define fastIO ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0)
#define ll long long
const int mod = 1e9+7;
ll n, a, b;
bool good(ll x)
{
	
	ll total = (x)/a + (x)/b;

	return total>=n-1;
}
int main()
{
	fastIO;
	cin >> n >> a >> b;
	ll l = 0, r = 1e11;
	ll ans= 0;
	while(l<r)
	{
		ll mid = (r + l) / 2;
		//cout<<"good "<<good(mid)<<" ";
		if(good(mid))
		{
			ans=mid;
			r=mid;
		}
		else{
			l=mid+1;
		}
	}
	cout<<ans+ min(a,b)<<endl;
	
	return 0;
}