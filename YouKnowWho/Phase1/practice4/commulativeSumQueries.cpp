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
	int arr[n];
	for(int i=0; i<n;i++)
	{
		cin>>arr[i];
	}
	int pre[n+2];
	pre[0]=0;
	for(int i=0;i<n;i++)
	{
		pre[i+1]=pre[i]+arr[i];
	}

	int q;
	cin>>q;
	while(q--)
	{
		int a,b;
		cin>>a>>b;

		cout<<pre[b+1]-pre[a]<<'\n';
	}

	
	return 0;
}