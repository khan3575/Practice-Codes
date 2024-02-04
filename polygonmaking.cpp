#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	int n, k;
	cin >> n >> k;
	ll arr[n];
	for(int i = 0; i  < n; i++)
	{
		cin >> arr[i];
	}
	sort(arr, arr+n);
	
	for(int i=0; i<=n-k; i++)
	{
		ll sum= 0;

		for(int j = i ; j < i+k-1; j++ )
		{
			sum+= arr[j];
		}
		if( sum> arr[i+k-1])
		{
			cout<<"Yes\n";
			return 0;
		}
	}
	
		cout<<"No\n";

	return 0;
}