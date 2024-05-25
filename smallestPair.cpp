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
		int arr[n];
		for(int i=0; i<n;i++)
		{
			cin>>arr[i];
		}
		int ans=INT_MAX;
		for(int i=0; i<n-1;i++)
		{
			for(int j=i+1; j<n; j++)
			{
				ans = min( ans, arr[i]+arr[j]+j-i);
			}
		}
		cout<<ans<<endl;
	}
	return 0;
}