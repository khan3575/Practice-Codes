#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	int t;
	scanf("%d",&t);
	while(t--)
	{
		int n;
		scanf("%d",&n);
		int arr[n];
		for(int i=0; i<n; i++)
		{
			scanf("%d",&arr[i]);
		}
		if(n==3)
		{
			printf("0\n");
			continue;
		}
		sort(arr,arr+n);
		int mn1= arr[n-3]-arr[0];
		int mn2= arr[n-1]-arr[2];
		int mn3= arr[n-2]-arr[1];

		int ans= min(mn1,min(mn2,mn3));
		printf("%d\n",ans);
	}

	return 0;
}