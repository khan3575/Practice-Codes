#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
const ll N=10000000000;
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	int t;
	cin>>t;
	while(t--)
	{
		ll n,k;
		cin>>n>>k;
		ll low=k, high= N;
		ll ans=INT_MAX;
		ll minimum=k;
		ll maximum= n+k-1;
		while(high-low>1)
		{
			ll mid= (low+high)>>1;
			
			if(mid>maximum)
			{
				high=mid-1;
				continue;
			}

			cout<< mid<<endl;
			ll rightsum= ((mid-k+1)*(2*k+mid-k))/2;
			
			ll tn=(maximum-mid);
			ll leftsum= (tn*(2*k + tn-1))/2;
			cout<<rightsum<<" "<<leftsum<<endl;

			ll newsum= abs(leftsum-rightsum);
			if(ans>newsum)
			{
				ans=newsum;
				low= mid;
			}
			else{
				ans= min(ans, newsum);
				high=mid;
			}
		}
		cout<<ans<<endl;
	}

	return 0;
}