#include<bits/stdc++.h>
using namespace std;
#define fastIO ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0)
#define ll long long
const int mod = 1e9+7;
int getyear(string s)
{
	int ans=0;
	for(int i=0; i<4; i++)
	{
		ans*=10;
		ans+= (int)(s[i]-'0');
	}
	return ans;
}

int main()
{
	fastIO;
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		vector<pair<int,string>>v;
		int year;
		string s;
		cin.ignore();
		while(n--)
		 {
		 	getline(cin,s);
		 
		 	int tn=s.size();
		 	string y= s.substr(tn-4,tn);
		 	int year=getyear(y);
		 	v.push_back({year,s.substr(0,tn-5)});
		}
		sort(v.rbegin(),v.rend());
		for(auto it: v)
		{
			cout<<it.second<<'\n';
		}

	}
	
	return 0;
}