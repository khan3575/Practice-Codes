#include<bits/stdc++.h>
using namespace std;
#define fastIO ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0)
#define ll long long
const int mod = 1e9+7;
const int N=1e5+5;
ll power(ll pow)
{
	ll base=2;
	base%=mod;
	ll res=1;
	while(pow>0)
	{
		if(pow&1ll)
		{
			res= res* base %mod;
		}
		base= base* base %mod;
		pow>>=1;
	}
	return res-1;
}
int main()
{
	fastIO;
	//calculateFactor();
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		int x;
		map<int,int>mp;
		for(int i=0; i<n; i++)
		{
			cin >> x;
			mp[x] ++;
			//cout<<mp[x]<<" ";
		}
		ll ans=0;
		ll prefix= power(mp.begin()->second);
		//cout<<prefix<<endl;
		int cnt=0;
		for(auto it: mp)
		{
			if(cnt<1)
			{
				cnt++;
				continue;
			}
			ll val=power(it.second);
			ans= (ans+(prefix* val %mod))%mod;
			prefix= (prefix+ val)%mod;

		}
		cout<<(ans+prefix)%mod<<endl;

	}
	
	return 0;
}