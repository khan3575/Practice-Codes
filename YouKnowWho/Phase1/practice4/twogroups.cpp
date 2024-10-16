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
		cout<<1<<" ";
		for(int i=3; i<=n; i++)
		{
			cout<<i<<" ";
		}
		cout<<2<<endl;
	}
	
	return 0;
}