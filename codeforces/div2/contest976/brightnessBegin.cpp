#include<bits/stdc++.h>
using namespace std;
#define fastIO ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0)
#define ll long long
const int mod = 1e9+7;
int main()
{
	fastIO;
	int t;
	cin>>t;
	while(t--)
	{
		ll x;
		cin>>x;
		// ll sq= sqrtl(x);
		// if(sq*sq<x)
		// {
		// 	sq++;
		// }
		// cout<<x+sq<<endl;
		ll low=1,high=2e18;
		ll ans=0;
		while(low<=high)
		{
			ll mid= low+ (high-low)/2;

			ll sq=sqrt(mid);

			if(sq*sq>mid)
			{
				sq--;
			}
			if((sq+1)*(sq+1)<=mid)
			{
				sq++;
			}
			ll ansWithOutPrime= mid-sq;
			if(ansWithOutPrime>=x)
			{
				ans=mid;
				high=mid-1;
			}
			else{
				low=mid+1;
			}
		}
		cout<<ans<<endl;
	}
	
	return 0;
}