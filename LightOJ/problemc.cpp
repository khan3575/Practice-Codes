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
		vector<int>arr(n);
		for(int i=0; i<n; i++)
		{
			cin>>arr[i];
		}
		int ans=n;
		for(int i=0; i<n; i++)
		{
			int numberOfGreater=i;
			for(int j=i+1; j<n; j++)
			{
				if(arr[j]>arr[i])
				{
					numberOfGreater++;
				}
			}
			ans= min(ans, numberOfGreater);
		}
		cout<<ans<<'\n';
		

		
	}
	
	return 0;
}