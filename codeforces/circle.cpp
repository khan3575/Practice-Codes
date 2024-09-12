#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	int n;
	cin>>n;
	while(n--)
	{
		ll x;
		cin>>x;
		if(x%2==0)
		{
			if((x>>1)%2==1)
			{
				cout<<-1<<'\n';
			}
			else{
				ll mid= x>>1;
				ll ans= (mid*(mid+1))/2;
				ans-= x/4;
				cout<<ans<<'\n';
			}
		}
		else{
			ll mid= x>>1;
			cout<< mid*(mid+1)/2<<'\n';
		}
	}

	return 0;
}