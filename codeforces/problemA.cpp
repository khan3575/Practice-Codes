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
		int arr[n];
		int mx=-1,mn=INT_MAX;

		for(int i=0; i<n; i++)
		{
			cin>>arr[i];
			mx= max(mx,arr[i]);
			mn= min(mn, arr[i]);
		}
		cout<< (mx-mn)*(n-1)<<'\n';
	}
	
	return 0;
}