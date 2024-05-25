#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		int arr[n];
		for(int i=0; i<n;i++)
		{
			cin>> arr[i];
		}
		for(int i=0; i<n;i++)
		{
			int mx= 0;
			for(int j=0; j<n; j++)
			{
				for(int k=0; k<=j; k++)
				{
					mx=max(arr[k],mx);
				}cout<<mx<<" ";
			}

		}
		cout<<endl;
	}
	return 0;
}