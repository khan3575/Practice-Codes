#include<bits/stdc++.h>
using namespace std;
#define fastIO ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0)
#define ll long long
const int mod = 1e9+7;
int main()
{
	fastIO;
	ll n;
	cin>>n;
	ll sum= n*(n+1)/2;
	//cout<<sum<<endl;
	if(sum%2==1)
	{
		cout<<"NO\n";
	}
	else{
		cout<<"YES\n";
		ll ter= sum>>1;
		ll res=0;
		vector<int>a,b;
		for(int i=n; i>0; i--)
		{
			if(res+i==ter)
			{
				res+=i;
				a.push_back(i);
			}
			else if(res+i>ter)
			{
				b.push_back(i);
			}
			else{
				res+=i;
				a.push_back(i);
			}
		}
		cout<<a.size()<<endl;
		for(auto it: a)
		{
			cout<<it<<" ";
		}
		cout<<endl;
		cout<<b.size()<<endl;
		for(auto it:b)
		{
			cout<<it<<" ";
		}
		cout<<endl;
	}
	
	return 0;
}