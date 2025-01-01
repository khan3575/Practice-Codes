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
	while(t--){
		int n;
		cin>>n;
		int arr[n];
		int mx=0;
		int mxLoc=-1;
		for(int  i=0; i<n;i++)
		{
			cin>>arr[i];
			if(arr[i]>mx)
			{
				mxLoc=i;
				mx=arr[i];
			}
		}
		int currentNumber=0;
		int  cnt=0;
		for(int i=0; i<mxLoc; i++)
		{
			if(arr[i]>=currentNumber)
			{
				currentNumber=arr[i];
				cnt++;
			}
		}
		cout<<cnt<<'\n';
	}
	
	return 0;
}