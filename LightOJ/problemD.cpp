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
		int n,k;
		cin>>n>>m;
		vector<int> a(n),pre(n+1),b(m);
		vector<pair<int,int>> a_with_i(n);
		for(int  i=0; i<n; i++)
		{
			cin>>a[i];
			pre[i+1]= pre[i]+a[i];
			a_with_i({a[i],i});
		}
		for(int i=0; i<m; i++)
		{
			cin>>b[i];
		}
		sort(a_with_i.rbegin(),a_with_i.rend());
		ll sum=0;
		if(a[0]>=b[0])
		{
			cout<<-1<<'\n';
		}
		else{
			
		}
	}
	
	return 0;
}