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
		ll b,c,k;
		cin>>b>>c>>k;
		ll low=0, high=2e18;
		ll ans=-1;
		while(low<high)
		{
			ll mid= low +(high-low)/2;
			ll temp= (mid|b)-(mid&c);
			if(k<=temp)
			{
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
