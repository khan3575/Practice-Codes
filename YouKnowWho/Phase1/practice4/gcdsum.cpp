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
	ll sum=0;
	for(int i=1; i<=n;i++)
	{
		for(int j=1; j<=n; j++)
		{
			int gc=__gcd(i,j);
			for(int k=1; k<=n;k++)
			{
				int gc1=__gcd(gc,k);
				sum+=gc1;
			}
		}
	}
	cout<<sum<<endl;
	
	return 0;
}