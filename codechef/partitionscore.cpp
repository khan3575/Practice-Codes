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
		cin>>n>>k;
		vector<int>v;
		int x;
		for(int i=0; i<n;i++)
		{
			cin>>x;
			v.push_back(x);
		}
		sort(v.rbegin(),v.rend());
		int mn1,mn2,mx1,mx2;

		mx1=v[0];
		mx2=v[1];
		mn1=v[k];
		mn2=v[n-1];
		if(k==1)
		{
			mn1=v[0];
		}

		cout<<mx1+mx2+mn1+mn2<<'\n';

	}


	
	return 0;
}