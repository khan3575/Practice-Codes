#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
ll calprefix(ll k, ll n)
{
	return k*n + n*(n+1)/2;
}
ll calculatesum(ll y,int n,ll mid)
{
	return calprefix(y,mid)- calprefix(y+mid,n-mid);
}
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	int t;
	cin>>t;
	while(t--)
	{
		int x,y;
		cin>>x>>y;

		ll low=0,high=x,mid;
		ll ans=x;
		while(low<high)
		{
			mid= low+ (high-low)/2;

			if(calculatesum(y,x,mid)>=0)
			{
				high=mid;
			}
			else{
				low=mid+1;
			}
		}
		ans= calculatesum(y,x,low);
		if(low>0)
		{
			ans= min(ans,abs(calculatesum(y,x,low-1)));
		}
		cout<<ans<<endl;

	}
	return 0;
}