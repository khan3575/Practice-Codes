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
		int n;
		cin>>n;
		int arr[2][n];
		for(int i=0; i<2; i++)
		{
			for(int j=0; j<n; j++)
			{
				cin>>arr[i][j];
			}
		}
		ll ans= INT_MIN;
		for(int i=0; i<n; i++)
		{
			ll s=0;
			
			for(int j=0; j<n; j++)
			{
				if(i==j)
				{
					continue;
				}
				s+= max(arr[0][j],arr[1][j]);
			}
			s+= arr[0][i]+arr[1][i];
			ans= max(ans,s);
		}
		cout<<ans<<endl;
	}
	
	return 0;
}