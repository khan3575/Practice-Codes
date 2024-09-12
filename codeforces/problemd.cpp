#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
const int N=200005;
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		map<ll,ll> mp;
		ll mx_till_now=0;
		ll ans=0;
		int x,y;
		for(int i=1; i<=n; i++)
		{
			cin>>x>>y;
			mp[y]++;
			ll prev_part= ((mp[y]-2)*(mp[y]-1))/2;
			ll new_part= (mp[y]*(mp[y]-1))/2;
			ans-=prev_part;
			ans+=new_part;
			if(mp[y]>mx_till_now)
			{
				mx_till_now=mp[y];
			}
			ll res= ans;

			res-= (mx_till_now-1)*(mx_till_now)/2;

			res+= (mx_till_now+ (n-i-1))*(mx_till_now+ (n-i) )/2;

			cout<<res<<" ";
		}	
		cout<<'\n';
		

	}

	return 0;
}