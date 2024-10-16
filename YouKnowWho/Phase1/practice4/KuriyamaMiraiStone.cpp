#include<bits/stdc++.h>
using namespace std;
#define fastIO ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0)
#define ll long long
const int mod = 1e9+7;
int main()
{
	fastIO;
	int n;
	cin>>n;
	ll arr[n];
	ll pre[n+2];
	for(int i=0; i<n;i++)
	{
		cin>>arr[i];
	}
	pre[0]=0;
	for(int i=0; i<n;i++)
	{
		pre[i+1]=pre[i]+arr[i];
	}
	sort(arr,arr+n);
	ll pre1[n+2];
	pre1[0]=0;
	for(int i=0; i<n;i++)
	{
		pre1[i+1]=pre1[i]+arr[i];
	}
	int q;
	cin>>q;
	while(q--)
	{
		int op,a,b;
		cin>>op>>a>>b;
		if(op&1)
		{
			cout<<pre[b]-pre[a-1]<<'\n';
		}
		else{
			cout<<pre1[b]-pre1[a-1]<<'\n';
		}
	}

	
	return 0;
}