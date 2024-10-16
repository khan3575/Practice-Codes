#include<bits/stdc++.h>
using namespace std;
#define fastIO ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0)
#define ll long long
const int mod = 1e9+7;
int main()
{
	fastIO;
	int x;
	map<int,int>mp;
	vector<int> order;
	while(cin>>x)
	{
		if(mp[x]==0)
		{
			order.push_back(x);
		}
		mp[x]++;
	}
	for(auto i:order)
	{
		cout<<i<<" "<<mp[i]<<endl;
	}
	
	
	return 0;
}