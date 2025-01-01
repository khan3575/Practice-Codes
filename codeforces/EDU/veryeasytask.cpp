#include<bits/stdc++.h>
using namespace std;
#define fastIO ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0)
#define ll long long
const int mod = 1e9+7;
ll n,a,b;

bool good(ll mid)
{
	 return (mid/a)+(mid/b) >= n-1;
}

int main()
{
	fastIO;
	cin>>n>>a>>b;
	ll l=0, r=1e14;
	while(r>l)
	{
		ll mid= (l+r)/2;
		if(good(mid))
		{
			r=mid;
		}
		else{
			l=mid+1;
		}
	}
	cout<<r+min(a,b)<<endl;
	
	return 0;
}