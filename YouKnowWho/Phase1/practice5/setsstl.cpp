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
	set<int>st;
	while(t--)
	{
		int n,x;
		cin>>n>>x;
		if(n==1)
		{
			st.insert(x);
		}
		else if(n==2)
		{
			if(st.find(x)==st.end())
			{
				continue;
			}
			else{
				st.erase(x);
			}
		}
		else{
			if(st.find(x)!=st.end())
			{
				cout<<"Yes\n";
			}
			else{
				cout<<"No\n";
			}
		}
	}
	
	return 0;
}