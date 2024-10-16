#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
const int mod = 1e9+7;
vector<ll>v(1005);

void factor()
{
	ll fact=1;
	v[0]=1;
	for(ll i=1; i<=1000; i++)
	{
		fact= ((fact%mod)*(i%mod))%mod;
		v[i]=fact;
	}
}

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	factor();
	int t;
	cin>>t;

	while(t--)
	{
		int n;
		cin>>n;
		cout<<v[n]<<'\n';
	}	

	return 0;
}