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
		vector<int>b(k+1,0);
		//cout<<b[10];
		int x,y;
		for(int i=0; i<k;i++)
		{
			cin>>x>>y;
			b[x]+=y;
		}
		sort(b.rbegin(),b.rend());
		ll sum=0;
		for(int i=0; i<n && i<k; i++)
		{
			sum+= b[i];
		}
		cout<<sum<<'\n';
	}
	
	return 0;
}