#include<bits/stdc++.h>
using namespace std;
#define fastIO ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0)
#define ll long long
const int mod = 1e9+7;
int n, k;
const int N = 2e5 + 5;
ll arr[N];
bool isgood(ll mid)
{
	for(int i = 0; i < n; i++){
		if(arr[i] > mid)
		{
			return false;
		}
	}
	ll sum = arr[0];
	ll cnt = 1;
	for(int i = 1; i < n; i++)
	{
		sum+= arr[i];
		if(sum>mid)
		{
			sum = arr[i];
			cnt++;
		}
	}
	return cnt<=k;
}
int main()
{
	fastIO;
	
	cin>>n>>k;
	
	for(int i = 0; i < n; i++)
	{
		cin >> arr[i];
	}
	ll l=0, r=1e17;
	ll ans=0;
	while(l <= r)
	{
		ll mid = (l + r) / 2;
		if(isgood(mid))
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