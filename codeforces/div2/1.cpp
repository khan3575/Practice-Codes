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
		int loc=-1;
		for(int i=0; i<n; i++)
		{
			if (s[i]=='0'){
				loc=i;
				break;
			}
		}
		if(loc==-1)
		{
			cout<<1<<" "<<n<<" "<<n<<" "<<n<<'\n';
		}
		else
		{
			string alter="";
			for(int i=loc; i<n; i++)
			{
				if(s[i]=='0')
				{
					alter+='1';
				}
				else{
					alter+='0';
				}
			}
			int a=1,b=n,c=1,d=1;
			int cnt=0;
			bool seen[(int)alter.size()]={0};
			for(int i=0; i<loc;i++)
			{
				int match=0;
				int sz= alter.size();
				for(int j=0; j<sz; j++)
				{
					if(s[i+j]==alter[j])
					{
						match++;
					}
					else{
						break;
					}
				}
				if(match>cnt)
				{
					cnt=match;
					c=i+1;
					d=i+sz;
				}
			}
			cout<<a<<" "<<b<<" "<<c<<" "<<d<<'\n';
		}
	}
	
	return 0;
}