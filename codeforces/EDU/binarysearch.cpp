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
	vector<int>v(n);
	for(int i=0; i<n; i++)
	{
		cin>>v[i];
	}
	while(k--)
	{
		int q;
		cin>>q;

		int l=0, r=n-1;
		bool   ok=false;
		while(r>=l)
		{
			int mid= (l+r)/2;
			if(v[mid]==q)
			{
				ok=true;
				break;
			}
			else if(v[mid]<q)
			{
				l= mid+1;
			}
			else{
				r=mid-1;
			}
		}
		if(ok)
		{
			cout<<"YES\n";
		}
		else{
			cout<<"NO\n";
		}

	}
	
	return 0;
}