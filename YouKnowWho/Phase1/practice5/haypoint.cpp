#include<bits/stdc++.h>
using namespace std;
#define fastIO ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0)
#define ll long long
const int mod = 1e9+7;
int main()
{
	fastIO;
	int n,k;
	cin>>n>>k;
	map<string,int>mp;
	string s;
	int x;
	for(int i=0; i<n;i++)
	{
		cin>>s>>x;
		mp[s]=x;
	}
	while(k--){
		ll sum=0;
		while(cin>>s)
		{
			if(s==".")
			{
				break;
			}
			if(mp.find(s)!=mp.end())
			{
				sum+=mp[s];
			}
		}
		cout<<sum<<endl;
	}
	
	return 0;
}