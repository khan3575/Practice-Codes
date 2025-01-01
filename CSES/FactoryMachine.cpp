#include<bits/stdc++.h>
using namespace std;
#define fastIO ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0)
#define ll long long
const int mod = 1e9+7;
bool solve(ll time, ll terget, ll n, ll arr[])
{
	ll total = 0;
	for(int i = 0; i < n; i++)
	{
		total += time/arr[i];
		if(total>=terget)
		{
			break;
		}
	}
	return total >= terget;
}
int main()
{
	fastIO;
	ll n , k;
	cin >> n >> k;
	ll arr[n];
	for(int i = 0; i < n; i++)
	{
		cin >> arr[i];
	}
	ll l=0, r=1e18;
	ll ans=0;
	while(l<=r){
		ll mid = (l + r) / 2;
		if(solve(mid,k,n, arr))
		{
			ans= mid;
			r = mid - 1;
		}
		else{
			l = mid + 1;
		}
	}
	cout << ans << endl;
	
	return 0;
}