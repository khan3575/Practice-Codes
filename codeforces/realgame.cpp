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
		string s;
		cin>>s;
		bool ok=false;
		if(s[0]=='1' || s[n-1]=='1')
		{
			cout<<"YES\n";
		}
		else
		{
			for(int i=0; i<n-1; i++)
			{
				if(s[i]=='1'&&s[i+1]=='1')
				{
					ok=true;
				}
			}
			if(ok)
			{
				cout<<"YES\n";
			}
			else{
				cout<<"NO\n";
			}
		}
	}
	
	return 0;
}