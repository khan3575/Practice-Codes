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
		vector<int>v(n);
		int even=0, odd=0;
		for(int i=0; i<n;i++)
		{
			cin>>v[i];
			if(v[i]&1)
			{
				odd++;
			}
			else{
				even++;
			}
		}
		
		if(odd==0)
		{
			cout<<0<<'\n';
		}
		else{
			cout<<even+((odd+1)/2)<<'\n';
		}
	}
	
	return 0;
}