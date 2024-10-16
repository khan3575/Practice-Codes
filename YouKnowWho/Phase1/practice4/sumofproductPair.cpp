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
	for(int i=0; i<n;i++)
	{
		cin>>arr[i];
	}
	ll pre[n+2];
	pre[n+1]=0;
	pre[0]=0;
	for(int i=0; i<n; i++)
	{
		pre[i+1]= (pre[i]%mod+arr[i]%mod)%mod;
	}
	ll sum=0;
	for(int i=0; i<n-1; i++)
	{
		sum= ((((arr[i]%mod)*(pre[n]-pre[i+1]+mod)%mod)%mod)+sum)%mod;
	}
	cout<<sum%mod<<endl;
	
	return 0;
}