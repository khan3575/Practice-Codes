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
		int n,m;
		cin>>n>>m;
		int a,d,k;
		vector<pair<int,int>> v;
		while(m--)
		{
			cin>>a>>d>>k;
			v.push_back({a,a+(k-1)*d});
		}
		sort(v.begin(),v.end());
		int cnt=0;
		for(int i=0)
	}
	
	return 0;
}