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
	vector<pair<int,int>>plus,minus;
	int x,a;
	for(int i=0; i<n;i++)
	{
		cin>>x>>a;
		if(x<0)
		{
			minus.push_back({x,a});
		}
		else{
			plus.push_back({x,a});
		}
	}
	sort(plus.begin(),plus.end());
	sort(minus.rbegin(),minus.rend());
	int psz=plus.size();
	int mnz=minus.size();
	ll sum=0;
	if(psz==mnz){
		for(int i=0; i<psz; i++)
		{
			sum+=plus[i].second;
			sum+=minus[i].second;
		}
	}
	else if(psz>mnz)
	{
		
		for(int i=0; i<mnz; i++)
		{
			sum+=plus[i].second;
			sum+=minus[i].second;
		}
		sum+= plus[mnz].second;
	}
	else{
		//cout<<"Yes"<<endl;
		//cout<<psz<<endl;
		for(int i=0; i<psz; i++)
		{
			//cout<<i<<endl;
			//cout<<sum<<endl;
			sum+=plus[i].second;
			sum+=minus[i].second;
			//cout<<sum<<endl;
		}

		sum+= minus[psz].second;
	}
	cout<<sum<<endl;

	// for(auto it: plus)
	// {
	// 	cout<<it.first<<" "<<it.second<<endl;
	// }
	// for(auto it: minus)
	// {
	// 	cout<<it.first<<" "<<it.second<<endl;
	// }
	
	return 0;
}