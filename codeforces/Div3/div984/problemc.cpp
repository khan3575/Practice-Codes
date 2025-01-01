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
		string s;
		cin>>s;
		int n= s.size();
		
		int cnt=0;
		for(int i=0; i<=n-4; i++)
		{
			if(s.substr(i,4)=="1100")
			{
				cnt++;
			}
		}
		int q;
		cin>>q;
		while(q--)
		{
			int i;
			int val;
			cin>>i>>val;
			i=i-1;
			for(int j= max(0, i-3); j<=min(n-4,i); j++)
				{
					if(s.substr(j,4)=="1100")
					{
						cnt--;
					}
				}
			s[i]= (val+'0');
			for(int j= max(0, i-3); j<=min(n-4,i); j++)
				{
					if(s.substr(j,4)=="1100")
					{
						cnt++;
					}
				}
			if(cnt>0)
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