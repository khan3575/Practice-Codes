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
		ll n,k;
		cin>>n>>k;
		vector<ll>v(n);
		for(int i=0; i<n; i++)
		{
			cin>>v[i];
		}
		sort(v.begin(),v.end());
		ll curr = 0, ans = 0;
		ll previous_take=0;
		ll prefix=0;
		for(int i=0; i<n; i++)
		{
			total= (n-i)*v[i]-prefix;
			total-= previous_take
			curr+= total;
			previous_take+= total;
			prefix+=v[i];
		}
	}
	
	return 0;
}