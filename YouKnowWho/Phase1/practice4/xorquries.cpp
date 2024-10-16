#include<bits/stdc++.h>
using namespace std;
#define fastIO ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0)
#define ll long long
const int mod = 1e9+7;
int main()
{
	fastIO;
	int n,q;
	cin>>n>>q;
	int arr[n];
	for(int i=0; i<n;i++)
	{
		cin >> arr[i];
	}	
	int pre[n+1];
	pre[0] = 0 ;
	for(int i=0; i<n;i++)
	{
		pre[i+1] = arr[i]^pre[i];
	}
	while(q--)
	{
		int x,y;
		cin>>x>>y;
		cout<< (pre[y]^ pre[x-1])<<endl;
	}

	return 0;
}