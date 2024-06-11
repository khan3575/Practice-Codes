
#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
int n,m;
int arr[1005];
bool isPossible(int mid)
{
	int container=1;
	int sum=0;
	for(int i=0; i<n; i++)
	{
		if(arr[i]>mid)
		{
			return false;
		}
		if(sum+arr[i]<=mid)
		{
			sum+=arr[i];
		}
		else{
			sum= arr[i];
			container++;
			if(container>m)
			{
				return false;
			}
		}
	}
	return true;
}
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	int t;
	cin>>t;

	for(int cases= 1; cases<=t; cases++)
	{
		cin>>n>>m;
		for(int i=0; i<n; i++)
		{
			cin>>arr[i];
		}
		int l=0, r=INT_MAX, ans=0;
		while(l<r)
		{
			int mid= (l+r)>>1;
			if(isPossible(mid))
			{
				ans=mid;
				r=mid;
			}
			else{
				l=mid+1;
			}
		}
		cout<<"Case "<<cases<<": "<<ans<<'\n';	

	}

	return 0;
}