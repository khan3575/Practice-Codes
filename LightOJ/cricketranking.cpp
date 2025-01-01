#include<bits/stdc++.h>
using namespace std;
#define fastIO ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0)
#define ll long long
const int mod = 1e9+7;
ll starsAndBars(ll s, ll n)
{
	
}
int main()
{
	fastIO;
	int t;
	cin>>t;
	while(t--)
	{
		int n,k;
		cin>>n>>k;
		ll arr[n];
		ll low=0;
		for(int i=0; i<n; i++)
		{
			cin>>low>>arr[i];
			k-=low;
			arr[i]-=low;
		}
		ll  res=0;
		for(int i=0; i< (1<<n); i++)
		{
			int bits=0;
			ll temp=0;
			for(int j=0; j<n; j++)
			{
				if((i>>j)&1)
				{
					temp+= arr[i]+1;
				}
			}
			if(k-temp<0)
			{
				continue;
			}
			ll temp_contri= starsAndBars(k-1, n-1)%mod;

		}
	}
	
	return 0;
}