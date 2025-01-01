#include<bits/stdc++.h>
using namespace std;
#define fastIO ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0)
#define ll long long
const int mod = 1e9+7;
const int N=1005;
ll t[N];
ll z[N];
ll y[N];
ll n, k;
bool f(ll mid)
{
	ll total_balons= 0;
	for(int i = 0; i < n; i++)
	{
		ll l = 0, r = 1e6;
		ll ans =0;
		while(l <= r)
		{
			ll m = (l + r) / 2;
			ll res = t[i]* m + (m/z[i])*y[i];
			if(res<=mid)
			{
				ans=m;
				l=m+1;
			}
			else{
				r=m-1;
			}
		}
		total_balons += ans;
	}
	return total_balons >= k;
}
int main()
{
	fastIO;
	cin >> k >> n;
	for (int i = 0; i < n; i++)
	{
		cin >> t[i] >> z[i] >> y[i];
	}

	ll l = 0, r = 1e10;
	ll ans = 0;
	while(l <= r)
	{
		ll mid = (l + r) / 2;
		if(f(mid))
		{
			ans=mid;
			r = mid-1;
		}
		else{
			l = mid + 1;
		}
		
	}
	cout<<ans<<endl;
	for(int i=0; i<n; i++)
	{
		cout<< ans/ (t[i]*z[i] + y[i]) <<" ";
	} 
	
	return 0;
}