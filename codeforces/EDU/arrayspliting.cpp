#include<bits/stdc++.h>
using namespace std;
#define fastIO ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0)
#define ll long long
const int mod = 1e9+7;
int main()
{
	fastIO;
	int n,m,k;
	cin>>n>>m>>k;
	int arr[n],brr[m];
	ll suma=0, sumb=0;
	for(int i=0; i<n;i++)
	{
		cin>>arr[i];
		suma+=arr[i];
	}
	for(int i=0; i<m; i++)
	{
		cin>>brr[i];
		sumb+=brr[i];
	}
	vector<int> v(n+m+3);
	for(int i=0; i<n;i++)
	{
		v[i]= arr[i]*suma;
	}
	
	return 0;
}