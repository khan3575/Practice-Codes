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
		int n=s.size();
		stack<char>st;
		for(int i=0; i<n;i++)
		{
			if(st.empty())
			{
				st.push(s[i]);
			}
			else{
				if((st.top()=='(' &&s[i]==')')||(st.top()=='[' &&s[i]==']')||(st.top()=='{' &&s[i]=='}'))
				{
					st.pop();
				}
				else{
					st.push(s[i]);
				}
			}
		}
		if((int)st.size()==0)
		{
			cout<<"YES\n";
		}
		else{
			cout<<"NO\n";
		}
	}
	return 0;
}