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
	for(int cases=1; cases<=t; cases++)
	{
		int n, k;
		cin>>n>>k;
		int arr[n+2];
		for(int i=0; i<n;i++)
		{
			cin>>arr[i];
		}
		sort(arr,arr+n);
		cout<<"Case "<<cases<<":"<<endl;
		while(k--)
		{
			int l,r;
			cin>>l>>r;

			int pos1 = lower_bound(arr,arr+n,l)-arr;
			//cout<<pos1<<" ";
			int pos2 = upper_bound(arr, arr+n, r)-arr;
			//cout<<pos2<<endl;
			cout<<(pos2-pos1)<<endl;
		}	
	}

	return 0;
}