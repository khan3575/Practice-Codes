#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
void build(int idx, int low, int high, int arr[], int seg[])
{
	if(high==low)
	{
		seg[idx]= arr[low];
		return;
	}
	int mid= (low+high)>>1;
	build(2*idx+1, low, mid, arr,seg);
	build(2*idx+2, mid+1, high, arr , seg);
	seg[idx]= seg[2*idx+1]^seg[2*idx+2];
}
int query(int idx, int low, int high, int l, int r, int seg[])
{
	//no overlap
	if(low>r || high<l)
	{
		return 0;
	}
	if(low>=l && high<=r)
	{
		return seg[idx];
	}
	int mid=(low+high)>>1;
	int left = query(2*idx+1, low,mid,l,r,seg);
	int right = query(2*idx+2, mid+1, high,l,r,seg);
	return left^right;
}
 
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	int n,q;
	cin>>n>>q;
	int arr[n],seg[n*4+1];
	for(int i=0; i<n; i++)
	{
		cin>>arr[i];
	}
	build(0, 0, n-1, arr, seg);
	while(q--)
	{
		int l,r;
		cin>>l>>r;
		cout<<query(0,0,n-1,l-1,r-1,seg)<<endl;
 
	}
	return 0;
}