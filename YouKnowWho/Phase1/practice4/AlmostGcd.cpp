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
	int arr[n];
	for(int i=0; i<n; i++)
	{
		cin>>arr[i];
	}
	int mx_cnt=0;
	int ans=0;
	for(int i=2; i<=1000; i++)
	{
		int cnt=0;
		for(int j=0; j<n; j++)
		{
			if(arr[j]%i==0)
			{
				cnt++;
			}
		}	
		if(mx_cnt<=cnt)
		{
			mx_cnt=cnt;
			ans=i;
		}
	}
	cout<<ans<<endl;
	
	return 0;
}