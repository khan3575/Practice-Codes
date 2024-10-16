#include<bits/stdc++.h>
using namespace std;
#define fastIO ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0)
#define ll long long
const int mod = 1e9+7;
int main()
{
	fastIO;
	int n;
	cin>>n;
	string s,t;
	map<string,string>mp;
	while(n--)
	{
		cin>>s>>t;

		if(mp.find(s)==mp.end())
		{
			mp[t]=s;
		}
		else{
			mp[t]=mp[s];
			mp.erase(s);
		}
	}
	cout<<mp.size()<<endl;
	for(auto it: mp)
	{
		cout<<it.second<<" "<<it.first<<endl;
	}
	
	return 0;
}