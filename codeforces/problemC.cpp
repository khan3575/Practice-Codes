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
		int n,k;
		cin>>n>>k;
		ll arr[n+1];
		bool ok[n+1]={false};
		for(int i=0; i<n;i++)
		{
			cin>>arr[i];
		}
		for(int i=0; i<k; i++)
		{
			arr[n-1]=arr[i]+arr[n-1];
			ok[i]=true;
			
		}
		for(int i=0; i<n; i++)
		{
			if(!ok[i])
			{
				cout<<arr[i]<<" ";
			}
		}
		cout<<'\n';

	}

	return 0;
}