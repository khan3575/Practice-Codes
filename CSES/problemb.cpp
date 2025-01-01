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
		int n, m;
		cin>>n>>m;
		int arr[n];
		int loc=-1,val=0,val1=0;
		for(int i=0; i<n; i++)
		{
			cin>>arr[i];
			if(arr[i]!=-1 && loc==-1)
			{
				loc=i;
				val= arr[loc];
				val1=val;
			}
		}
		for(int i=loc+1; i<n; i++)
		{
			val= (val+1)%m;
			arr[i] = val;
		}
		for(int i= loc-1; i>=0; i--)
		{
			val1= (val1-1+m)%m;
			arr[i]=val1;
		}
		for(int i=0; i<n; i++)
		{
			cout<<arr[i]<< " ";
		}
		cout<<endl;

	}
	
	return 0;
}