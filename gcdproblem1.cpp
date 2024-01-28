#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	int t;
	cin>>t;
	while(t--)
	{
		ll n, k;
		cin>>n>>k;
		ll ans=1;
		for(ll i=1; i*i<=n; i++)
		{
			if(n%i==0)
			{
				if(k<= n/i)
				{
					ans= max(ans, i);
				}
				if(k<=i)
				{
					ans= max(ans, n/i);
				}
			}
		}
		cout<<ans<<endl;
	}
	return 0;
}