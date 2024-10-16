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
		int n,k;
		cin>>n>>k;
		int arr[n];
		bool ok=false;
		ll ans= ((1LL<<32)-1);
		for(int i=0; i<n;i++)
		{
			cin>>arr[i];
			ans&=arr[i];
		}
		if(ans<k)
		{
			cout<<"YES\n";
		}
		else{
			cout<<"NO\n";
		}

	}
	
	return 0;
}