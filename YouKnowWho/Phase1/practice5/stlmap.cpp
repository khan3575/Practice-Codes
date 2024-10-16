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
	map<string,int>mp;
	for(int i=0; i<n; i++)
	{
		int x;
		string s;
		int p;
		cin>>x;
		if(x==1)
		{
			cin>>s>>p;
			mp[s]+=p;
		}
		else if(x==2)
		{
			cin>>s;
			mp[s]=0;
		}
		else{
			cin>>s;
			cout<<mp[s]<<endl;
		}
	}

	
	return 0;
}