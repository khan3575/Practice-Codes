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
	for(int i=0; i<n; i++)
	{
		int x,y,k;
		cin>>x>>y>>k;
		int mx= max(max(y,k),x);
		cout<< 0<<" "<<y<<" "<<x<<" "<<2*y<<endl;
		cout<<0<<" "<<y<<" "<<x<<" "<<0<<endl;
	}
	
	return 0;
}