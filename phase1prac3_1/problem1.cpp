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
			cin>>arr[i];
		}
		if(n==2)
		{
			if(abs(arr[0]-arr[1])==1)
			{
				cout<<"NO\n";
			}
			else{
				cout<<"YES\n";
			}
		}
		else{
			cout<<"NO\n";
		}

	}
	return 0;
}