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
		int odd=0,even=0;
		for(int i=0; i<n ;i++){
			cin>>arr[i];
			if(arr[i]&1)
			{
				odd++;
			}
			else{
				even++;
			}
		}
		if(odd==n||even==n)
		{
			cout<<0<<endl;
		}
	}
	return 0;
}