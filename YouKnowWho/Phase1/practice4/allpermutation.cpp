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
	for(int i=1; i<=n;i++)
	{
		arr[i-1]=i;
	}
	do{
		for(int i=0; i<n;i++)
		{
			cout<<arr[i];
		}
		cout<<endl;
	}
	while(next_permutation(arr,arr+n));
	
	return 0;
}