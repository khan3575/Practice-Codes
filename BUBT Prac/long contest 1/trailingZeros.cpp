#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
ll getNumberOfZeros(ll x)
{
	ll ans=0;
	while(x>0)
	{
		ans+= x/5;
		x/=5;
	}
	return ans;
}
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	int t;
	cin>>t;
	for(int cases=1; cases<=t; cases++)
	{
		ll n;
		cin>>n;
		ll l=0, r=10000000000;
		ll ans=-1;
		while(l<r)
		{
			ll mid= (l+r)>>1;
			ll temp= getNumberOfZeros(mid);

			if(temp==n)
			{
				ans=mid;
			}
			if(temp>=n)
			{
				r=mid;
			}
			else{
				l=mid+1;
			}
		}
		cout<<"Case "<<cases<<": ";
		if(ans==-1)
		{
			cout<<"impossible"<<'\n';
		}
		else{
			cout<<ans<<'\n';
		}

	}

	return 0;
}