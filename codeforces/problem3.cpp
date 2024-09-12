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
		ll x,y,k;
		cin>>x>>y>>k;
		ll mx= max(x,y);
		if(x==y && y==0)
		{
			cout<<0<<endl;
			continue;
		}
		bool ok=true;
		if(x==mx && y%k==0 )
		{
			ok=false;
		}
		ll dif=mx/k;
		if(mx%k!=0)
		{
			dif++;
		}
		ll ans= 2*dif;

		if(!ok)
		{
			ans--;
		}
		cout<<ans<<'\n';
		
	}

	return 0;
}