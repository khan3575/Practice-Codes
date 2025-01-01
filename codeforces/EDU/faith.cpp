#include<bits/stdc++.h>
using namespace std;
#define fastIO ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0)
#define ll long long
const int mod = 1e9+7;
const int N=3e5+5;
vector<ll> fact(N);
vector<ll> inv(N);
vector<ll> invv(N);


ll inves(ll a)
{
	 return a <= 1 ? a : mod - (long long)(mod/a) * inves(mod % a) % mod;
}
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

void factorial()
{
	ll facts=1;
	fact[0]=1;
	for(ll i=1; i<=N; i++)
	{
		facts= facts*i % mod;
		fact[i]=facts;
	}
	invv[1] = 1;
	for(int a = 2; a < N; ++a){
	    invv[a]=inves(a);
		}
	
	inv[N-1]= binaryExpo(fact[N-1], mod-2);

	for(ll i=N-2; i>=0; i--)
	{
		inv[i] = inv[i+1]* (i+1) %mod;

	}
	
}
int main()
{
	fastIO;
	factorial();
	int t;
	scanf("%d", &t);
	while(t--)
	{
		ll n, k;
		scanf("%lld %lld", &n, &k);
		ll initial_res=1;
		ll res= 1;
		for(int i=k; i<n; i++)
		{
			initial_res= (initial_res*(i+1)) %mod;
			initial_res= initial_res * invv[i+1-k]%mod;
			res= (res+initial_res)%mod;
		}
		printf("%lld\n", res);
	}
	
	return 0;
}