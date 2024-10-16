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
		set<char> a,b;
		string s;
		cin>>s;
		int arr[n];
		for(int i=n-1; i>=0; i--)
		{
			a.insert(s[i]);
			arr[i]= a.size();
		}
		int ans=0;
		for(int i=0; i<n-1; i++)
		{
			b.insert(s[i]);
			int bt=b.size();
			ans= max(ans,bt+arr[i+1]);
		}
		cout<<ans<<endl;
	}
	
	return 0;
}