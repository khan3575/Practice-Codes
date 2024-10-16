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
		for(int i=0; i<n;i++)
			{
				cin>>arr[i];
			}
		int a=0,b=0,ac=0,bc=0;
		for(int i=0; i<n;i+=2)
		{
			if(arr[i]>=a)
			{
				a=arr[i];
				ac++;
			}
			if(arr[i+1]>=b && i+1<n)
			{
				b=arr[i];
				bc++;
			}
		}
		int ans= max(a,b);
		if(ans==a)
		{
			ans+=ac;
		}
		else{
			ans+=bc;
		}
		cout<<ans<<endl;
	}	
	return 0;
}