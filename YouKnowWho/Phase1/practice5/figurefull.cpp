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
	map<pair<int,int>,string>mp;
	int a,b;
	string s;
	while(t--)
	{
		cin>>a>>b>>s;
		mp[make_pair(a,b)]=s;	
	}
	int q;
	cin>>q;
	while(q--)
	{
		cin>>a>>b;
		cout<<mp[{a,b}]<<endl;
	}
	
	return 0;
}