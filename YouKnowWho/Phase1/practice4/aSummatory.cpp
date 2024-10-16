#include<bits/stdc++.h>
using namespace std;
#define fastIO ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0)
#define ll long long
const int mod = 1e9+3;
const int N=1000005;
ll pre[N];
ll s(ll i)
{
	ll t= (i*(i+1)/2)%mod;
	return ((t%mod)*(t%mod))%mod;
}
void precal()
{
	for ( ll i = 1; i < N; i++)
	{
		pre[i]= (pre[i-1]+s(i))%mod;
	}

}
int main()
{
	fastIO;
	precal();
	int t;
	cin>>t;
	while(t--)
	{
		ll n;
		cin>>n;
		cout<<pre[n]<<'\n';
	}
	
	return 0;
}