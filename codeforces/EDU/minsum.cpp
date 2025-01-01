#include<bits/stdc++.h>
using namespace std;
#define fastIO ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0)
#define ll long long
const int mod = 1e9+7;
ll a, b, k;
bool good (ll x)
{
	ll aa= x/a;
	ll bb= x/b;
	//cout<<" ans "<<aa+bb<<endl;
	return aa*bb >=k ;
}
int main()
{
	fastIO;

	cin >> a >> b >> k;
	ll l = 0, r=1;
	while(!good(r))
	{
		r<<=1;
	}
	while(r>l+1)
	{
		ll mid= (r+l)/2;
		if(!good(mid))
		{
			l=mid;
		}
		else{
			r=mid;
		}
	}
	cout<<r<<endl;
	return 0;
}