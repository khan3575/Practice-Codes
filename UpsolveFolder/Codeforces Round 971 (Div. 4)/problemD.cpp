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
		bool arr[2][n+2];
		for(int i=0; i<2; i++)
			for(int j=0; j<=n+2; j++)
			{
				arr[i][j]=false;
			}
		int y1=0,y0=0;
		int x,y;
		ll ans=0;
		for(int i=0; i<n; i++)
		{
			cin>>x>>y;
			arr[y][x]=true;
			if(y==0)
			{
				y0++;
			}
			else{
				y1++;
			}
		}

		for(int i=0; i<=n; i++)
		{
			if(arr[1][i] &&arr[0][i])
			{
				ans+= (y1+y0-2);
			}
			if(i>=1 && i<n)
			{
				if(arr[1][i-1] &&arr[0][i] &&arr[1][i+1])
					{
						ans++;
					}
				if(arr[0][i-1] &&arr[1][i] &&arr[0][i+1])
					{
						ans++;
					}
			}
		}
		
		cout<<ans<<endl;
	}

	return 0;
}