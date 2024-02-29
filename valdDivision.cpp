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
		int n;
		cin>>n;
		vector<ll> arr(n);
		for(int i=0; i<n; i++)
		{
			cin>>arr[i];
		}
		sort(arr.begin(),arr.end());
		int l=0, r=n-1;
		ll check= (1LL<<31)-1;
		int ans=n;
		while(l<r)
		{
			if(arr[l]+arr[r]==check)
			{
				ans-=1;
				l++;
				r--;
			}
			else if( arr[l]+arr[r]>check)
			{
				r--;
			}
			else{
				l++;
			}
			
		}
		cout<<ans<<endl;
	}
	return 0;
}