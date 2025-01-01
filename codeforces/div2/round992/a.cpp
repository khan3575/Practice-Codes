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
		int n,k;
		cin>>n>>k;
		int  arr[n];
		for(int i=0; i<n; i++)
		{
			cin>>arr[i];
		}
		bool ok=false;
		int loc=-1;
		if(n==1)
		{
			cout<<"YES\n1\n";
			continue;
		}
		for(int i=0; i<n; i++)
		{
			bool temp=true;
			for(int j=0; j<n; j++)
			{
				if(i==j)
				{
					continue;
				}
				int dif= abs(arr[i]-arr[j]);
				if(dif%k==0){
					temp=false;
					break;
				}
			}
			
			if(temp)
			{
				
				ok=true;
				loc=i;
				break;
			}
		}
		if(ok)
		{
			cout<<"YES\n"<<loc+1<<'\n';
		}
		else{
			cout<<"NO\n";
		}
	}
	
	return 0;
}