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
	vector<int>v;
	for(int i=0; i<n;i++)
	{
		int x;
		cin>>x;
		v.push_back(x);
	}
	int q;
	cin>>q;
	v.erase(v.begin()+q-1);
	int l,r;
	cin>>l>>r;
	
	v.erase(v.begin()+l-1,v.begin()+r-1);
	cout<<v.size()<<endl;
	for(int x: v)
	{
		cout<<x<<" ";
	}
	cout<<endl;
	return 0;
}