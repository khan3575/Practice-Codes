#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
//check kth bit

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	int n;
	cin>> n;
	int arr[n];
	for(int i=0; i<n; i++)
	{
		cin>> arr[i];
	}
	for(int i=0; i<= (1<<n); i++)
	{
		for(int j =0; j<n; j++)
		{
			if( (i>>j)&1)
			{
				cout<< arr[j]<<" ";
			}
		}
		cout<<endl;
	}
	return 0;
}