#include<bits/stdc++.h>
using namespace std;
#define fastIO ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0)
#define ll long long
const int mod = 1e9+7;
void build(int idx, int low, int high, int arr[], int seg[])
{
	if(high==low)
	{
		seg[idx]=arr[low];
		return;
	}
	int mid= (low+high)>>1;
	build(2*idx+1,low,mid,arr,seg); 
	build(2*idx+2,mid+1,high,arr,seg);

	seg[idx]= seg[2*idx+1]^seg[2*idx+2];
}

int query(int idx,int low, int high,int l,int r, int arr[],int seg[])
{
	if(low>r || high<l)
	{
		return 0;
	}
	if(low>=l && high<=r)
	{
		return seg[idx];
	}

	int mid=(high+low)>>1;

	int left=query(2*idx+1,low,mid,l,r,arr,seg);
	int right=query(2*idx+2,mid+1,high,l,r,arr,seg);

	return left^right;
}
int main()
{
	fastIO;
	int n,q;
	cin>>n>>q;
	int arr[n];
	int seg[4*n+1];
	for(int i=0; i<n; i++)
	{
		cin>>arr[i];
	}
	build(0,0,n-1,arr,seg);
	while(q--)
	{
		int a,b;
		cin>>a>>b;
		cout<<query(0,0,n-1,a-1,b-1,arr,seg)<<endl;
	}
	return 0;
}