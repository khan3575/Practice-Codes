#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
void index(int arr[], int n, int i)
{
	if(i>(n-1))
	{
		return;
	}

	index(arr,n, i+2);
	cout<<arr[i]<<" ";
}

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	int n;
	cin>>n;
	int arr[n];
	for(int i = 0; i < n; i++)
	{
		cin>>arr[i];
	}
	index(arr, n, 0);

	return 0;
}