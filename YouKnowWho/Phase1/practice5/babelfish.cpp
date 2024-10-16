#include<bits/stdc++.h>
using namespace std;
#define fastIO ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0)
#define ll long long
const int mod = 1e9+7;
int main()
{
	fastIO;
	map<string,string>mp;
	string s;
	while(getline(cin,s))
	{
		if(s.empty())
		{
			continue;
		}
		if(find(s.begin(),s.end(),' ')!=s.end())
		{
			stringstream ss(s);
			string a,b;
			ss>>a>>b;
			mp[b]=a;
		}
		else{
			if(mp.find(s)!=mp.end())
			{
				cout<<mp[s]<<endl;
			}
			else{
				cout<<"eh\n";
			}
		}
	}
	return 0;
}