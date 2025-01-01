#include<bits/stdc++.h>
using namespace std;
#define fastIO ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0)
#define ll long long
const int mod = 1e9+7;
const int N=1e6+5;
ll phi[N];
void eulartotient()
{
	for(ll i=0; i<=N; i++)
	{
		phi[i]=i;
	}
	for(ll i=2; i<=N; i++)
	{
		if(phi[i]==i)
		{
			for(ll j=i; j<=N; j+=i)
			{
				phi[j] = (phi[j]*(i-1ll))/i;
			}
		}
	}
}
int main()
{
	fastIO;
	eulartotient();
	ll a,b;
	cin>>a>>b;
	ll phiA= b* phi[a];
	ll phiB= a* phi[b];
	ll phiAB= phi[a]*phi[b];

	cout<<phiA-phiAB <<" "<<phiB-phiAB<<" "<<phiAB<<'\n';
	
	return 0;
}