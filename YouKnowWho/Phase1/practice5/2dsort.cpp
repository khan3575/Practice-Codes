#include<bits/stdc++.h>
using namespace std;
#define fastIO ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0)
#define ll long long
const int mod = 1e9+7;
bool cmp(pair<int,int>a,pair<int,int>b)
{
	if(a.first>b.first || (a.first==b.first and a.second<b.second))
	{
		return false;
		
	}
	else{
		return true;
	}
}
int main()
{
	fastIO;
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		vector<pair<int,int>>v;
		cin>>n;
		int x,y;
		for(int i=0; i<n;i++)
		{
			cin>>x>>y;
			v.push_back(make_pair(x,y));
		}
		sort(v.begin(),v.end(),cmp);

		for(auto it: v)
		{
			cout<<it.first<<" "<<it.second<<'\n';
		}
	}
	
	return 0;
}