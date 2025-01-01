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
		int n;
		cin>>n;
		ll cnt=1;
		ll ans=1;
		if(n==1)
		{
			cout<<1<<endl;
			continue;
		}
		while(ans<n)
		{
			ans+=1;

			ans= ans*2;
			//cout<<ans<<endl;
			cnt++;
		}
		cout<<cnt<<'\n';

	}
	
	return 0;
}