#include<bits/stdc++.h>
using namespace std;
#define fastIO ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0)
#define ll long long
const int mod = 1e9+7;

ll binaryExpo(ll a, ll b)
{
	ll res=1;
	while(b>0)
	{
		if(b&1){
			res= res*a %mod;
		}
		a= a * a %mod;
		b>>=1;	
	}
	return res;
}


int main()
{
	fastIO;
	int t;
	cin>>t;
	while(t--)
	{
		ll n,k;
		cin>>n>>k;
		ll m= n-k;
		ll initial_res=1;
		for(int i=1; i<=k; i++)
		{
			initial_res= initial_res* i %mod;
		}
		ll fact= initial_res;
		ll res=initial_res;
		for(int i=1; i<=n-k; i++)
		{
			initial_res= (initial_res*(k+i)) %mod;

			initial_res= initial_res * (binaryExpo(i,mod-2)+mod)%mod;
			res= (res%mod+initial_res%mod);

		}
		res= res * binaryExpo(fact, mod-2)%mod;
		cout<<res<<'\n';	
	}
	
	return 0;
}