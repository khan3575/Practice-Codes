#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
int mx= INT_MIN;
void findMax(int arr[],int i, int n)
{
	if(i==n)
	{
		return ;
	}
	mx= max(arr[i], mx);
	findMax(arr, i+1, n);
}
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	int n;
	cin>>n;
	int arr[n];
	for(int i=0; i < n; i++)
	{
		cin >> arr[i];
	}
	findMax(arr,0,n);
	cout<<mx<<endl;
	return 0;
}