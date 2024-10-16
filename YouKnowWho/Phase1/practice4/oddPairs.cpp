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
		ll a,b;
		cin>>a>>b;
		ll sum=0;
		sum+= ((a+1)/2)*((b+1)/2);
		sum+= (a/2)*(b/2);
		cout<<sum<<'\n';
	}
	
	return 0;
}