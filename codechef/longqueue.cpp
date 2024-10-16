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
		int n;
		cin>>n;
		vector<int>v;
		int x;
		for(int i=0; i<n; i++)
		{
			cin>>x;
			v.push_back(x);
		}
		int him=v[n-1];
		int terget=v[n-1]/2;
		v.pop_back();
		for(int i=n-2; i>=0; i--)
		{
			if(v[i]<=terget)
			{
				v.pop_back();
			}
			else{
				break;
			}
		}
		v.push_back(him);
		int sz=v.size();
		cout<<sz<<'\n';
	}
	
	return 0;
}