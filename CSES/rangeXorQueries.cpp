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
	for(int i=0; i<n; i++)
	{
		cin>>arr[i];
	}
	int preXor[n+1];
	preXor[0]=0;
	for(int i=0;  i<n; i++)
	{
		preXor[i+1]=preXor[i]^arr[i];
	}

	while(q--)
	{
		int a,b;
		cin>>a>>b;
		cout<< (preXor[b]^preXor[a-1])<<endl;
	}
	
	return 0;
}